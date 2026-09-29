## Problem: Reverse Linked List (Easy)

**Link:** https://leetcode.com/problems/reverse-linked-list/

### Approach

I used an iterative approach with three pointers: `previous`, `current`, and `next`. For each node, I store the next node, reverse the current node's link to point to the previous node, and then move the pointers forward. At the end, `previous` becomes the new head of the reversed linked list.

### Complexity

- **Time:** O(n)
- **Space:** O(1)

### Notes

I tested the linked list `1 → 2 → 3 → 4 → 5` locally. The reversed list was `5 → 4 → 3 → 2 → 1`. The solution was also submitted to LeetCode.