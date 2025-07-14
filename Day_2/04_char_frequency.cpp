// Q4: Character Frequency (Without STL Map)

/*

    🧠 Problem Statement:
        Given a lowercase string, count the frequency of each alphabet character (a to z).
        Only consider alphabetic characters — ignore symbols, spaces, or digits.
        Do not use any STL container like map, unordered_map, etc.

        input :
        geeksforgeeks

        output :
        a: 0  
        b: 0  
        c: 0  
        d: 0  
        e: 4  
        f: 1  
        g: 2  
        h: 0  
        i: 0  
        j: 0  
        k: 1  
        l: 0  
        m: 0  
        n: 0  
        o: 1  
        p: 0  
        q: 0  
        r: 1  
        s: 2  
        t: 0  
        u: 0  
        v: 0  
        w: 0  
        x: 0  
        y: 0  
        z: 0


*/

#include<iostream>
#include<string>

using namespace std;

int main(){

    string s;
    cin>>s;

    int n=s.length();
    int arr[26];
    for(int i=0;i<26;i++){
        arr[i]=0;
    }
    for(int i=0;i<n;i++){
        int x=(int)s[i];
        arr[x-97]++;

    }
    for(int i=0;i<26;i++){
        char ch=(char)(97+i);
        cout<<ch<<" -> "<<arr[i];
    }
    return 0;
}