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
	long flag=0;
  for(int i=0;i<s.size();i++)
  {

    if(s[i]=='(' || s[i]=='{' || s[i]=='[' || s[i]=='<'  )
       {st.push(s[i]);
            continue;}

   else if(s[i]=='|' && st.empty())st.push('|');
else if(s[i]=='|' && st.top()=='|')
	st.pop();
else if(s[i]=='|')
	st.push(s[i]);


else {
   switch(s[i])
   {
    case ')':
	if(st.empty()){flag=1; break;}
             x=st.top();
             st.pop();
            if (x=='{' || x=='[' || x=='<' ) 
               flag=1;
            break; 


   case '}':
if(st.empty()){flag=1; break;}x=st.top();
             st.pop();
            if (x=='(' || x=='[' || x=='<' ) 
               flag=1; 
            break; 

   case ']':if(st.empty()){flag=1; break;}x=st.top();
             st.pop();
            if (x=='{' || x=='(' || x=='<' ) 
flag=1; 
            break; 


     case '>':if(st.empty()){flag=1; break;}x=st.top();
             st.pop();
            if (x=='{' || x=='[' || x=='(' ) 
             flag=1; 
            break; 

      
      default : break;
   }
if(flag==1)
break;
}
}


if(flag==1)
cout<<"NO"<<endl;

else if(st.empty())
	cout<<"YES"<<endl;

else cout<<"NO"<<endl;



}
return 0;
}






















