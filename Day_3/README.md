# 📦 Day 3: Stack Practice Using STL

🗓️ **Date:** 15-07-2025  
🎯 **Goal:** Solve key stack problems using STL for campus placement prep (TCS, Infosys, etc.)

---

## ✅ Topics Covered:
- Stack basics & STL operations
- Reversing structures using stack
- Expression & bracket validation
- Element tracking (next greater, duplicates)

---

## 📚 Problems Solved / To Solve:

| S.No | Problem Title                              | Type   | Difficulty | File Name                              | Status |
|------|---------------------------------------------|--------|------------|-----------------------------------------|--------|
| 1    | Reverse an Array using Stack                | Stack  | Easy       | `Q1_reverse_array_stack.cpp`            | ✅     |
| 2    | Check for Balanced Parentheses              | Stack  | Easy–Med   | `Q2_balanced_parentheses.cpp`           | ⏳     |
| 3    | Remove Adjacent Duplicates from String      | Stack  | Easy       | `Q3_remove_adj_duplicates.cpp`          | ⏳     |
| 4    | Next Greater Element (NGE)                  | Stack  | Medium     | `Q4_next_greater_element.cpp`           | ⏳     |
| 5    | Evaluate Postfix Expression                 | Stack  | Medium     | `Q5_postfix_evaluation.cpp`             | ⏳     |
| 6    | Sort a Stack using Another Stack            | Stack  | Medium     | `Q6_sort_stack_using_stack.cpp`         | ⏳     |
| 7    | Valid Palindrome using Stack                | Stack  | Easy       | `Q7_palindrome_stack.cpp`               | ⏳     |
| 8    | Design Stack with getMin() in O(1) Time     | Stack  | Med–Hard   | `Q8_min_stack.cpp`                      | ⏳ Optional |

---

## 🔧 STL Stack Syntax Quick Reference

```cpp
#include <stack>

stack<int> s;
s.push(10);      // Add to top
s.pop();         // Remove top
s.top();         // View top
s.empty();       // true if stack is empty
s.size();        // Number of elements
