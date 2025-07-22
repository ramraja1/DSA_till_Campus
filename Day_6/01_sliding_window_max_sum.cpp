// Question 1: Max Sum Subarray of Size K (Sliding Window)

/*

    🔸 Problem Statement:
        Given an array of integers and a number K, find the maximum sum of a subarray of size K.

        💡 Example:
        Input:
        arr = [100, 200, 300, 400],  K = 2  
        Output:
        700
        (Explanation: Subarray [300, 400] has the maximum sum)

*/

  #include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    int msum = 0;
    for(int i = 0; i < k; i++) {
        msum += arr[i];
    }

    int mx = msum;

    for(int i = k; i < n; i++) {
        msum = msum - arr[i - k] + arr[i]; // proper window update
        mx = max(mx, msum);
    }

    cout << mx << endl;
    return 0;
}
