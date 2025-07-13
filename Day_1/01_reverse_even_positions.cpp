// Problem Name: Reverse Elements at Even Positions

// Given an array of N integers, reverse the elements that are at even indices (0-based indexing), and leave the odd ones as they are.
// Then print the modified array.

/*Input:
6
10 20 30 40 50 60

Output:
50 20 30 40 10 60
*/


#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=0,y=n-1;
    if(n%2==0){
        y=n-2;
    }

    while(x<=y){
        swap(arr[x],arr[y]);
        x+=2;
        y-=2;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}