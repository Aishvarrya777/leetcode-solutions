## Problem: Reverse a String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

I used the two-pointer approach. One pointer starts from the beginning of the string and the other starts from the end. I swap the characters at these positions and move both pointers toward the center until the string is completely reversed.

### Complexity

* **Time:** O(n)
* **Space:** O(1)

### Notes

The solution reverses the string in-place without using another string. I tested a typical case `"hello"` and an edge case containing a single character `"a"` locally before submitting the solution to LeetCode.
