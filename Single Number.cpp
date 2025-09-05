https://leetcode.com/problems/single-number/
Problem :136. Single Number

Intuition:
We have a list of integers, where each element appears twice, except one that appears only once, and we want to identify the unique number.
Bitwise XOR will allow us to solve this problem in a very efficient way. This is because the XOR operation has some unique characteristics that perfectly suit this case:
a ^ a = 0 (any number XORed with itself results in zero)
a ^ 0 = a (any number XORed with zero remains the same)

XOR is commutative and associative (order of operations doesn’t matter).

Hence, when you XOR all the elements in the array, you effectively eliminate all the pairs of numbers that appear twice, and you are left with the one that appears only once.

Approach:
Initially, we set the variable single to zero. Next, we loop through the array and 
perform an XOR operation between single and each element: single = single ^ num. 
When the loop finishes, the pairs of duplicate numbers will have eliminated each other and and single will contain the value of the number that appears only once

Complexity
Time Complexity: O(n) — Only one pass through the array.
Space Complexity: O(1) — Only one integer variable used

Code: C++
class Solution {
public:
    int singleNumber(vector<int>& nums) {
      int single=0;
        for(int i=0;i<nums.size();i++)
        {
            single=single^nums[i];
        }
        return single;
    }
};
