https://leetcode.com/problems/shuffle-the-array/
Problem : 1470. Shuffle the Array

Intuition :
Given an array nums containing 2n elements, where the first n elements form one group and the next n elements form another. The objective is to shuffle the array so that elements from the two groups alternate in the result. The expected output format is [nums[0], nums[n], nums[1], nums[n+1], ..., nums[n-1], nums[2n-1]]. 
To slove this problem pick one element from the first group, then one from the second group, and continue this pattern until all elements are used.

Approach :
1. Initialize two pointers, start at 0 for the first half and end at n for the second half of the array
2. Use a loop to process elements from both halves of the array
3. In each iteration add nums[start++] followed by nums[end++] to the result
4. After the loop ends return the final interleaved result array

Complexity
Time Complexity: O(n) — we iterate through half the array and perform constant-time operations in each step.
Space Complexity: O(n) — we create a new array to store the shuffled result with the same size as the input.

Code: C++
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;
        int start=0;
        int end=n;
        while(start<n && end<nums.size()) {
            result.push_back(nums[start++]);
            result.push_back(nums[end++]);
        }
        return result;
    }
};
