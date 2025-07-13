// Q3: Check if Array is Sorted and Rotated

/*

Given an array of n integers, check if the array is sorted in increasing order and then rotated clockwise.

An array is said to be sorted and rotated if it is sorted in increasing order, then rotated at some pivot.

    📥 Input Format:

    5  
    3 4 5 1 2
    📤 Output Format:

    YES

    Sample Input (Not sorted & rotated):

    5  
    1 3 5 4 2
    Output:
    NO

*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int >arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int x=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            x=i+1;
            break;
        }
    }
    for(int i=0;i<x-1;i++){
        if(arr[i]>arr[i+1]){
            cout<<"No";
            return 0;
        }
    }
    for(int i=x;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            cout<<"No";
            return 0;
        }
    }
     if(arr[n - 1] > arr[0]) {
        cout << "NO" << endl;
        return 0;
    }
    cout<<"Yes";

    return 0;

}