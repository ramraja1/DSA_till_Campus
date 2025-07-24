// Bubble  Sort 

// Bubble Sort is a simple sorting algorithm that compares adjacent elements and swaps them if they are in 
// the wrong order. It continues this process for multiple passes until the array is sorted.

/*

🧠 How it Works (Step-by-Step)
Let’s take an example:
arr = [5, 2, 8, 4, 1]

🔄 Pass 1:
Compare 5 and 2 → swap → [2, 5, 8, 4, 1]

Compare 5 and 8 → no swap

Compare 8 and 4 → swap → [2, 5, 4, 8, 1]

Compare 8 and 1 → swap → [2, 5, 4, 1, 8]
✔ 8 is now at the correct position (end)

🔄 Pass 2:
Compare 2 and 5 → no swap

Compare 5 and 4 → swap → [2, 4, 5, 1, 8]

Compare 5 and 1 → swap → [2, 4, 1, 5, 8]
✔ 5 is now at its correct position

🔄 Pass 3:
Compare 2 and 4 → no swap

Compare 4 and 1 → swap → [2, 1, 4, 5, 8]
✔ 4 in place

🔄 Pass 4:
Compare 2 and 1 → swap → [1, 2, 4, 5, 8]
✔ Done! Sorted.

It needed n-1 passes in worst case (for n elements).


*/

/*

| Scenario     | Time Complexity | Explanation                         |
| ------------ | --------------- | ----------------------------------- |
| Best Case    | O(N)            | Already sorted, no swaps needed     |
| Average Case | O(N²)           | Nested loop comparisons             |
| Worst Case   | O(N²)           | Reversed array, max number of swaps |
| Space        | O(1)            | In-place sorting                    |

*/

// code
#include<iostream>
#include<vector>
using namespace std;

// ✅ Bubble Sort Function
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        // Optimization: Track if any swap happened
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            // If the element is greater than the next, swap them
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped, the array is already sorted
        if (!swapped) break;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr); // ✅ Call the correct function

    for (auto i : arr) {
        cout << i << " ";
    }

    return 0;
}
