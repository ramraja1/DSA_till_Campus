// Q2: Count Frequency of Each Element in an Array (Without STL)

// Given an array of N integers, print the frequency of each unique element in the array in ascending order of elements.
// ⚠️ Do not use STL (like map or unordered_map).

/*
input
    7  
    10 20 10 30 10 20 40
output
    10 -> 3  
    20 -> 2  
    30 -> 1  
    40 -> 1

*/


#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans;
    for(int i=0;i<n;i++){
        int f=1;
        if(arr[i]==-1){
            continue;
        }
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]&&i!=j){
                f++;
                arr[j]=-1;
            }
        }
        ans.push_back(f);

    }

    for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
    }
    return 0;
}

// with map stl i know vector is also a stl but for easeness i used there+

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int>freq;
    for(auto i:arr){
        freq[i]++;
    }
    for(auto i:freq){
        cout<<i.first()<<" --> "<<i.second()<<endl;
        
    }
    return 0;
}