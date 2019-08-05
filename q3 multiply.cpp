#include<bits/stdc++.h> 
using namespace std; 
  

string multiply(string num1, string num2) 
{ 
    int l1 = num1.size(); 
    int l2 = num2.size(); 
    if (l1 == 0 || l2 == 0) 
    return "0"; 
  
   
    vector<int> result(l1 + l2, 0); 
  
    int i_n1 = 0;  
    int i_n2 = 0;  
      
    
    for (int i=l1-1; i>=0; i--) 
    { 
        int carry = 0; 
        int n1 = num1[i] - '0'; 
  
      
        i_n2 = 0;  
          
                  
        for (int j=l2-1; j>=0; j--) 
        { 
            
            int n2 = num2[j] - '0'; 
  
          
            int sum = n1*n2 + result[i_n1 + i_n2] + carry; 
  
            
            carry = sum/10; 
  
             
            result[i_n1 + i_n2] = sum % 10; 
  
            i_n2++; 
        } 
  
        if (carry > 0) 
            result[i_n1 + i_n2] += carry; 
  
       
        i_n1++; 
    } 
  
    int i = result.size() - 1; 
    while (i>=0 && result[i] == 0) 
    i--; 
  
   
    if (i == -1) 
    return "0"; 
  
  
    string s = ""; 
      
    while (i >= 0) 
        s += std::to_string(result[i--]); 
  
    return s; 
} 
  
int main() 
{ 
    string str1 ;
    string str2 ;
      cin>>str1>>str2;

    if((str1.at(0) == '-' || str2.at(0) == '-') &&  
        (str1.at(0) != '-' || str2.at(0) != '-' )) 
        cout<<"-"; 
  
  
    if(str1.at(0) == '-' && str2.at(0)!='-') 
        { 
            str1 = str1.substr(1); 
        } 
        else if(str1.at(0) != '-' && str2.at(0) == '-') 
        { 
            str2 = str2.substr(1); 
        } 
        else if(str1.at(0) == '-' && str2.at(0) == '-') 
        { 
            str1 = str1.substr(1); 
            str2 = str2.substr(1); 
        } 
    cout << multiply(str1, str2);
     
    return 0; 
} 
