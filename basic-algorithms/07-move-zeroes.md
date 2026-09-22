## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

I used a position pointer to keep track of where the next non-zero element should be placed. I traverse the array and whenever I find a non-zero element, I swap it with the element at the current position. This moves all non-zero elements to the front while keeping the zeroes at the end.

### Complexity

* **Time:** O(n)
* **Space:** O(1)

### Notes

The solution modifies the array in-place without creating another array. I tested a typical case `[0, 1, 0, 3, 12]`, which becomes `[1, 3, 12, 0, 0]`, and an edge case containing only zeroes.
