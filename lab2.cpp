#include<bits/stdc++.h>
using namespace std;

int main()
{

int n;
cin>>n;

for(int  i=0;i<n;i++)
{

string s;
cin>>s;


  stack<char> st;
char x;

  for(int i=0;i<s.size();i++)
  {
    if(s[i]=='(' || s[i]=='{' || s[i]=='[' || s[i]=='<'  )
       {st.push(s[i]);
            continue;}

   
else if(s[i]=='|' && st.top()=='|')
	st.pop();
else if(s[i]=='|')
	st.push(s[i]);


else {
   switch(s[i])
   {
    case ')':
             x=st.top();
             st.pop();
            if (x=='{' || x=='[' || x=='<' ) 
               cout<<"NO"; 
            break; 


   case '}':x=st.top();
             st.pop();
            if (x=='(' || x=='[' || x=='<' ) 
               cout<<"NO" ; 
            break; 

   case ']':x=st.top();
             st.pop();
            if (x=='{' || x=='(' || x=='<' ) 
               cout<<"NO";  
            break; 


     case '>':x=st.top();
             st.pop();
            if (x=='{' || x=='[' || x=='(' ) 
             cout<<"NO"; 
            break; 

      
      default : break;
   }

}
}
if(st.empty())
	cout<<"YES";
else cout<<"NO";



}
return 0;
}












