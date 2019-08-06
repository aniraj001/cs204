#include<bits/stdc++.h> 
typedef long long int lli; 
typedef unsigned long long int ulli; 
#include <iostream>
#include <string>
using namespace std; 
  

bool isless(string str1, string str2) 
{ 
    
    int n1 = str1.length(), n2 = str2.length(); 
  
    if (n1 < n2) 
        return true; 
    if (n2 > n1) 
        return false; 
  
    for (int i=0; i<n1; i++) 
    { 
        if (str1[i] < str2[i]) 
            return true; 
        else if (str1[i] > str2[i]) 
            return false; 
    } 
    return false; 
} 
  

string Diff(string str1, string str2) 
{ 
    
    if (isless(str1, str2)) 
        swap(str1, str2); 
  
    
    string str = ""; 
  
    
    int n1 = str1.length(), n2 = str2.length(); 
    int diff = n1 - n2; 
  
   
    int carry = 0; 
  
   
    for (int i=n2-1; i>=0; i--) 
    { 
       
        int sub = ((str1[i+diff]-'0') - 
                   (str2[i]-'0') - 
                   carry); 
        if (sub < 0) 
        { 
            sub = sub+10; 
            carry = 1; 
        } 
        else
            carry = 0; 
  
        str.push_back(sub + '0'); 
    } 
  
   
    for (int i=n1-n2-1; i>=0; i--) 
    { 
        if (str1[i]=='0' && carry) 
        { 
            str.push_back('9'); 
            continue; 
        } 
        int sub = ((str1[i]-'0') - carry); 
        if (i>0 || sub>0) 
            str.push_back(sub+'0'); 
        carry = 0; 
  
    } 
  
    
    reverse(str.begin(), str.end()); 
  
    return str; 
} 


int main() 
{ 
int t;
cin>>t;

for(int i=0;i<t;i++)
{



    string str1; 
    string str2;
    cin>>str1>>str2; 
    cout << Diff(str1, str2)<<endl; 
}
    return 0; 
} 
