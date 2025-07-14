// Q3: Check if a String is a Palindrome (Without STL)

/*

    🧠 Problem Statement:
    Given a lowercase string, check whether it is a palindrome — a word that reads the same forward and backward.
    Do this without using STL functions like reverse().

    input :
     madam
    
    output :
     YES


*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    for(int i=0,j=n-1;i<j;i++,j--){
        if(s[i]!=s[j]){
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;
    return 0;
}