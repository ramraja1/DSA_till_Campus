//  Q2. First Negative Number in Every Window of Size K

/*

    ✅ Problem Statement:
    Given an array of integers and a positive integer K, find the first negative number in every contiguous subarray/window of size K. If a window does not contain a negative number, return 0 for that window.

    📥 Input:
    An integer n (size of array)

    An array arr of size n

    An integer k (window size)

    📤 Output:
    A list of integers: first negative integer in each window of size k, or 0 if none.

    🔍 Example:
    Input:

        n = 8  
        arr = {12, -1, -7, 8, 15, 30, 16, 28}  
        k = 3
    Output:
       -1 -1 -7 0 0 0

    🔁 Explanation:
    Window 1: {12, -1, -7} → First negative: -1

    Window 2: {-1, -7, 8} → First negative: -1

    Window 3: {-7, 8, 15} → First negative: -7

    Window 4: {8, 15, 30} → No negative → 0

    Window 5: {15, 30, 16} → No negative → 0

    Window 6: {30, 16, 28} → No negative → 0

*/
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    int k;
    cin >> k;

    vector<int> ans;

    for(int i = 0; i <= n - k; i++) {
        bool found = false;

        for(int j = i; j < i + k; j++) {
            if(arr[j] < 0) {
                ans.push_back(arr[j]);
                found = true;
                break;
            }
        }

        if(!found) ans.push_back(0);
    }

    for(auto val : ans) {
        cout << val << " ";
    }

    cout << endl;
    return 0;
}
