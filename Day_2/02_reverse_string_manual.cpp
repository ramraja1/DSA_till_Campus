// Q2: Reverse a String (Manually Without STL)

/*
🧠 Problem Statement:
Given a lowercase string, reverse the string manually — without using STL functions like reverse(), strrev(), or std::reverse().


hello
olleh

*/

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    
    for(int i=0,j=n-1;i<=j;i++,j--){
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;

    } 
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
}