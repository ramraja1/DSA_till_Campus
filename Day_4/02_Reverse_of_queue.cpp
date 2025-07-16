// Q2: Reverse First K Elements of a Queue

/*

    📘 Problem Statement:
    Given a queue of integers and an integer k, reverse the first k elements of the queue while keeping the rest of the queue in the same order.

    📥 Input Example:

    Queue: 10 20 30 40 50  
     k = 3
    📤 Output:

     30 20 10 40 50

*/


#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>ans;
    queue<int>c;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        c.push(x);
    }
    int k;
    cin>>k;

    int ct=1;
    while(!c.empty()){
        if(ct<=k){
            ans.push_back(c.front());
            c.pop();
            
        }
        else{
          break;
        }
        ct++;
    }
    reverse(ans.begin(),ans.end());
    while(!c.empty()){
        ans.push_back(c.front());
        c.pop();
    }

    for(auto i:ans)cout<<i <<" ";

    return 0;
}