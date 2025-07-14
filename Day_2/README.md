# 📅 Day 2: Strings & Sliding Window (Basics)

## 🎯 Goal
Strengthen fundamental string‑handling skills that frequently appear in **TCS**, **Infosys**, and other campus coding rounds.  
Emphasis on **manual logic (no heavy STL)** and a first taste of **fixed‑size sliding window** patterns.

---

## 📘 Problems Covered

| # | Problem | Concept Focus | File Name | Status |
|---|---------|--------------|-----------|--------|
| 1 | Count Vowels & Consonants | Basic traversal | `count_vowels_consonants.cpp` | ✅ / ⬜ |
| 2 | Reverse a String (manual) | Two‑pointer | `reverse_string_manual.cpp` | ✅ / ⬜ |
| 3 | Check Palindrome (manual) | Two‑pointer | `is_palindrome.cpp` | ✅ / ⬜ |
| 4 | Character Frequency (a‑z) | Array of size 26 | `char_frequency.cpp` | ✅ / ⬜ |
| 5 | First Non‑Repeating Character | Two passes / freq array | `first_non_repeating_char.cpp` | ✅ / ⬜ |
| 6 | Max Vowels in Substring of Length K | Fixed‑size sliding window | `max_vowels_in_window_k.cpp` | ✅ / ⬜ |

> Mark **Status** as ✅ when solved and push the code; keep ⬜ while pending.

---

## 🧠 Quick Reference – Key Approaches

| Topic | Core Idea | Time | Space |
|-------|-----------|------|-------|
| Vowel/Consonant count | Single pass, `if` chain | O(n) | O(1) |
| Reverse string | `l = 0, r = n‑1` swap | O(n) | O(1) |
| Palindrome check | Same two‑pointer; break on mismatch | O(n) | O(1) |
| Char frequency | `int freq[26]` | O(n) | O(1) |
| First non‑repeat | First fill `freq`, second pass to find char | O(n) | O(1) |
| Sliding window | Maintain running vowel count in current window | O(n) | O(1) |