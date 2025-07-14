// Day 2 – Q1: Count Vowels and Consonants

/*
🧠 Problem Statement:
Given a lowercase English string, count:

Total vowels

Total consonants

Only alphabetic characters (a–z) are considered. Ignore digits, symbols, or uppercase (or convert them to lowercase).

*/

/*
    input :
     hello

    output :
     Vowels: 2  
     Consonants: 3

*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    int v=0,c=0;
    for(int i=0;i<n;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')v++;
        else c++;

    }
    cout<<"Vowel :"<<v<<endl;
    cout<<"Consonent :"<<c;

}