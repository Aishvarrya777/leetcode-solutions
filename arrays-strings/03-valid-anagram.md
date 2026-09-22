## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I used a frequency-counting approach. I created an array of 26 integers to store the frequency of each lowercase English letter. For every character in the first string, I increase its count, and for every character in the second string, I decrease its count. If all counts become zero, the two strings are anagrams.

### Complexity

* **Time:** O(n)
* **Space:** O(1)

### Notes

I first checked whether both strings have the same length. I then tested a typical anagram case, `"anagram"` and `"nagaram"`, and a non-anagram case, `"rat"` and `"car"` locally before submitting to LeetCode.
