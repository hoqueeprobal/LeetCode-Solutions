https://leetcode.com/problems/missing-number/
Problem : 268. Missing Number

Intuition:
Given an array nums containing n distinct numbers taken from the range [0, n], return the one number that is missing from the array.

The sum of the first n natural numbers (from 0 to n) is given by the formula:
Total Sum= n * (n + 1) / 2.​

If we subtract the sum of elements in the array from this total sum, the difference will be the missing number.

Approach:
1.Compute n = nums.size().
2.Calculate the expected total sum using the formula: n * (n + 1) / 2.
3.Calculate the current sum by summing all elements in the array.
4.The missing number is: total sum - current sum.

Complexity
Time Complexity: O(n) — One pass through the array.
Space Complexity: O(1) — Constant space used.

Code: C++
class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n=nums.size();
    int totalsum= n*(n + 1)/2;
    int currentsum=0;

    for(int i=0; i<nums.size(); i++) {
        currentsum = currentsum + nums[i];
    }
    return totalsum - currentsum;
}
};
