## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

I used a brute-force approach with two nested loops. For each element, I check the elements that come after it to find a pair whose sum is equal to the target. When the required pair is found, their indices are returned.

### Complexity

* **Time:** O(n²)
* **Space:** O(1) excluding the returned array

### Notes

The indices must be different, so the second loop starts from `i + 1`. I also tested a duplicate-value case `[3, 3]` with target `6` locally before submitting the solution to LeetCode.
