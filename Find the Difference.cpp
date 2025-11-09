https://leetcode.com/problems/find-the-difference/
Problem : 389. Find the Difference

Intuition:
We are given two strings, s and t. String t has been created by shuffling s and then inserting one additional character. We need to identify and return that extra character.

The easiest method to get the answer is by sorting both strings. When sorted, the first n characters of s and t (n = s.length()) must  be identical and in the same positions. If there is a character that does not match at the same index, it is the extra character in t. In case the characters are identical at all the compared positions, the extra character is the last character of t.


Approach:
First, obtain the length n of the string s.Then perform sorting on both strings s and t. After that compare each character of the sorted strings from index 0 up to n - 1. If you find a character in t that differs from the corresponding character in s at any position then return that character immediately. In case all the characters match in the compared range, return the last character of t, as it is the extra character.

Complexity
Time Complexity: O(n log n) - due to sorting both strings
Space Complexity: O(1) — assuming in-place sorting with minimal extra memory

Code: C++
class Solution {
public:
    char findTheDifference(string s, string t) {
       int n=s.length();
       sort(s.begin(), s.end());
       sort(t.begin(), t.end());
         for(int i=0;i<n;i++) {
            if(s[i]!=t[i]) {
                return t[i];
            }
        }
        return t[n];
    }
};
