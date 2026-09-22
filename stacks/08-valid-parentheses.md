## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to check whether the brackets are properly matched. Whenever I encounter an opening bracket `(`, `[`, or `{`, I push it onto the stack. When I encounter a closing bracket, I check whether it matches the most recently added opening bracket. If it does not match, the string is invalid. At the end, the stack must be empty for the string to be valid.

### Complexity

* **Time:** O(n)
* **Space:** O(n)

### Notes

I tested a valid case `"()[]{}"` and an invalid case `"(]"` locally before submitting the solution to LeetCode. The solution uses the Last In, First Out (LIFO) property of a stack.
