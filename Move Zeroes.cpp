Problem : 283. Move Zeroes

Intuition :
The Problem Statement is move all zeroes in an array to the end while maintaining the relative order of the non-zero elements.
A common and efficient approach for such problems is the two-pointer technique, where one pointer traverses the array
and the other keeps track of the position to place the next non-zero element.

Approach :
We initialize a pointer nonzero=0 to be used as a place holder for the position that the next non-zero element will go.
We iterate through the array with another pointer j.If nums[j] is non-zero, we swap it with nums[nonzero] 
and increment nonzero.This reordering leaves all non-zero elements in their original order at the beginning of the array
and all zeroes at its end.

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
