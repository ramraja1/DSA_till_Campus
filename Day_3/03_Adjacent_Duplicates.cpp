//  Q3: Remove All Adjacent Duplicates in a String

/*

🧠 Problem Statement:
Given a lowercase string, remove all adjacent duplicates.
Use stack to solve this.

    📥 Input:
    
    abbaca
    📤 Output:
   
    ca

*/

#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){

    string s;
    cin>>s;
    int n=s.size();
    stack<int>st;
    for(int i=0;i<n;i++){
        if(!st.empty()&&s[i]==st.top()){
            st.pop();
        }
        else{
        st.push(s[i]);
        }
    }
    vector<char>ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    for(auto i:ans)cout<<i;
    return 0;

}