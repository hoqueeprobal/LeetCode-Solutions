https://leetcode.com/problems/special-array-i/
Problem : 3151. Special Array I

Intuition:
There is a need to determine if a given array is special. Such an array is called special if every pair of neighboring elements is of 
opposite parity (one even number and one odd).We return false if there is an instance of both neighbors being even or odd.
For the verification, we iterate the array and compare the parity of each number with the previous one.
If all pairs are legal, the function will return true. 


Approach:
1. Start from index 1 and iterate through the array.
2. Check the parity of the current element and the previous one and compare them using num % 2.
3. Immediately return false if these two adjacent numbers have the same parity.
4. Otherwise, after the complete iteration, return true.

Complexity
Time Complexity: O(n) — We check each adjacent pair once
Space Complexity: O(1) — No extra space used, just simple comparisons

Code: C++
class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        for (int i=1;i<nums.size();i++) {
            if(nums[i]%2==nums[i-1]%2) {
                return false;
            }
        }
        return true;
    }
};
