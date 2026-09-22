## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

I used the binary search algorithm. I maintained two pointers, `left` and `right`, representing the current search range. I calculated the middle index and compared the middle element with the target. If the target was larger, I searched the right half; if it was smaller, I searched the left half. The process continued until the target was found or the search range became empty.

### Complexity

* **Time:** O(log n)
* **Space:** O(1)

### Notes

Binary search requires the array to be sorted. I tested a case where the target `9` was found at index `4` and a case where the target `2` was not present, returning `-1`.
