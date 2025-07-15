// Q2: Check for Balanced Parentheses

/*
    Problem Statement:
    Given a string containing just the characters (, ), {, }, [ and ], determine if the input string is valid.

    A string is valid if:

    Open brackets must be closed by the same type of brackets.

    Open brackets must be closed in the correct order.

    input :
    {[()]}

    output :

    YES

*/

#include<iostream>
#include<string>
#include<stack>

int main(){

   string s;
   getline(cin,s);
   int n=s.size();
   stack<char>st;
   for(int i=0;i<n;i++){
    if(s[i]=='('||s[i]=='{'||s[i]=='[')
    st.push(s[i]);
    else{
                if(st.empty())return false;
                if(s[i]==')'&& st.top()!='('||
                    s[i]=='}'&&st.top()!='{'||
                    s[i]==']'&&st.top()!='['){
                        cout<<"NO";
                    return false;
                }
                st.pop();
            }

   }

   if(st.empty())
   cout<<"YES";
   else cout<<"NO";
   

    return 0;
}