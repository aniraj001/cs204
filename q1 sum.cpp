how #include<bits/stdc++.h> 
typedef long long int lli; 
typedef unsigned long long int ulli; 
#include <iostream>
#include <string>
using namespace std; 
  

string Sum(string s1, string s2) 
{ 
    
    if (s1.length() > s2.length()) 
        swap(s1, s2); 
    string s = ""; 

    int n1 = s1.length(), n2 = s2.length(); 
    int d = n2 - n1;     
    int carry = 0; 
  
    for (int i=n1-1; i>=0; i--) 
    { 
        
        int sum = ((s1[i]-'0') + 
                   (s2[i+d]-'0') + 
                   carry); 
        s.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
  
    
    for (int i=n2-n1-1; i>=0; i--) 
    { 
        int sum = ((s2[i]-'0')+carry); 
        s.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
  
  
    if (carry) 
        s.push_back(carry+'0'); 
  
    
    reverse(s.begin(), s.end()); 
  
    return s; 
} 
 
int main() 
{ 
int t;
cin>>t;

for(int i=0;i<t;i++)
{

    string s1 ;
    string s2  ;

    cin>>s1>>s2; 
    cout << Sum(s1, s2)<<endl; 

  }  
    return 0; 
} 
