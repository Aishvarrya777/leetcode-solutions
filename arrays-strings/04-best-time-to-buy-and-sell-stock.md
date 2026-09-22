## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I used a single-pass approach. I keep track of the minimum stock price seen so far. For each day, I calculate the profit by subtracting the minimum price from the current price. If this profit is greater than the maximum profit found so far, I update the maximum profit.

### Complexity

* **Time:** O(n)
* **Space:** O(1)

### Notes

The stock must be bought before it is sold, so I only compare the current price with the minimum price from previous days. I tested a typical case `[7, 1, 5, 3, 6, 4]`, which gives a maximum profit of `5`, and a decreasing-price case `[7, 6, 4, 3, 1]`, which gives a profit of `0`.
