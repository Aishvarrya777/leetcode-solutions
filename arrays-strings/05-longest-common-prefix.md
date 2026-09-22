## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I used a character-by-character comparison approach. I compare the characters of the first string with the corresponding characters of all the other strings. I continue until the characters no longer match or the end of a string is reached.

### Complexity

* **Time:** O(n × m)
* **Space:** O(1)

Where `n` is the number of strings and `m` is the length of the shortest string.

### Notes

I tested a typical case `["flower", "flow", "flight"]`, which gives `"fl"` as the common prefix. I also tested `["dog", "racecar", "car"]`, which has no common prefix.
