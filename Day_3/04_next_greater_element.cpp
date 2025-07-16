// Q4 (Stack): Next Greater Element (NGE)

/*

 Problem Statement:
Given an array of integers, find the next greater element (NGE) for every element.
The NGE for an element x is the first element to the right of x which is greater than x.
If no such element exists, use -1.

    n = 6  
    arr = [4, 5, 2, 25, 7, 8]

    5 25 25 -1 8 -1


*/
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n), res(n, -1);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    stack<int> st;

    for(int i = n - 1; i >= 0; i--) {
        while(!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        if(!st.empty()) {
            res[i] = st.top();
        }

        st.push(arr[i]);
    }

    for(int x : res) {
        cout << x << " ";
    }

    return 0;
}

