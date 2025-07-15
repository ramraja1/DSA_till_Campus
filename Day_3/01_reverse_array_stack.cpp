// Q1: Reverse an Array using Stack (STL)

/*
Problem Statement:
Given an array of N integers, reverse the array using a stack.

📌 Use STL stack<int> to solve it.

input :
 5  
10 20 30 40 50

 output :
   50 40 30 20 10

*/

#include<iostream>
#include<stack>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    stack<int>s;
    for(auto i:arr){
        s.push(i);
    }
    int i=0;
    while(!s.empty()){
            arr[i]=s.top();
            i++;
            s.pop();
    }

    for(auto i:arr){
        cout<<i<<" ";
    }

}