# 📅 Day 7 - Sorting Algorithms (Core Focus)

## ✅ Sorting Algorithms Covered:

### 🔹 1. Bubble Sort
- Repeatedly swap adjacent elements if they are in the wrong order.
- **Time Complexity:** O(N²)
- **Space Complexity:** O(1)
- **Stable:** ✅
- **Use Case:** Educational purposes, nearly sorted data.

---

### 🔹 2. Selection Sort
- Repeatedly select the minimum element and place it at the beginning.
- **Time Complexity:** O(N²)
- **Space Complexity:** O(1)
- **Stable:** ❌
- **Use Case:** Simple implementation but not efficient.

---

### 🔹 3. Insertion Sort
- Build the sorted array one item at a time by inserting elements at the correct position.
- **Time Complexity:** O(N²), but O(N) for nearly sorted arrays.
- **Space Complexity:** O(1)
- **Stable:** ✅
- **Use Case:** Good for small datasets or nearly sorted arrays.

---

### 🔹 4. Merge Sort
- Divide and conquer: Divide the array, sort each half, and merge them.
- **Time Complexity:** O(N log N)
- **Space Complexity:** O(N)
- **Stable:** ✅
- **Use Case:** Sorting linked lists, stable sorting needs.

---

### 🔹 5. Quick Sort
- Pick a pivot, partition array around pivot, and sort partitions.
- **Time Complexity:** O(N log N) average, O(N²) worst
- **Space Complexity:** O(log N) recursion stack
- **Stable:** ❌ (unless modified)
- **Use Case:** In-place, fast sorting of large arrays.

---

## 🧠 Key Learning Points:
- **Stability** matters in sorting objects with keys.
- Choose sorting algorithm based on **input size**, **space availability**, and **data structure**.
- Understand sorting deeply to master **Two Pointers**, **Greedy**, and **Binary Search** techniques.

## 🔜 Next:
- 🔢 Sorting with custom comparators
- ⚡ STL sorting (`sort`, `stable_sort`)
- 🔍 Sorting + Binary Search applications
