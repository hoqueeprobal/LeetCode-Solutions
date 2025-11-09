https://leetcode.com/problems/move-zeroes/
Problem : 283. Move Zeroes

Intuition :
The Problem Statement is move all zeroes in an array to the end while maintaining the relative order of the non-zero elements.
A common and efficient approach for such problems is the two-pointer technique, where one pointer traverses the array
and the other keeps track of the position to place the next non-zero element.

Approach :
1. Set​‍​‌‍​‍‌ a pointer nonzero = 0 which indicates the position of the next non-zero element.
2. Traverse the array with the pointer j.
3. In case nums[j] is a non-zero value, interchange nums[j] with nums[nonzero].After each exchange, nonzero is increased by 1.
4. As a result of the loop, all the non-zero elements are at the front and in the same order as before.
5. The rest of the elements (zeros) are placed at the end of the ​‍​‌‍​‍‌array.

Complexity :
Time complexity: O(n) — We traverse the array once, and each swap takes constant time.
Space complexity: O(1) — We do everything in-place without using extra space.

Code : C++
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonzero=0;
        for (int j=0; j<nums.size(); j++) {
            if (nums[j] !=0) {
                swap(nums[j], nums[nonzero]);
                nonzero++;
            }
        }
    }
};
