https://leetcode.com/problems/sort-colors/
Problem :75. Sort Colors

Intuition
The problem is to sort colors represented by an array of 0s, 1s, and 2s which are red, white, and blue, respectively. 
The need is to sort this array in such a way that it is sorted in-place and as a result, all 0s are followed by 1s and 2s.
A very efficient approach to this is the Dutch National Flag algorithm that applies three pointers to something portion the array into three segments:
Left side containing all 0s,
Middle containing all 1s,
Right side containing all 2s.

Approach
Set up three pointers:
1.red at the beginning of the array — the location where the next 0 will be put.
2.white at the beginning of the array — current index that is being checked.
3.blue at the extreme right of the array — the location where the next 2 will be put.
4.Set red at the beginning of the array — the location where the next 0 will be put.
5.Set white at the beginning of the array — current index that is being checked.
6.Set blue at the extreme right of the array — the location where the next 2 will be put.
7.The array is traversed as long as the white pointer is less than or equal to the blue pointer.

For the element at white:
If it is 0, exchange it with the element at red, then increment both red and white.
If it is 1, only white is moved forward.If it is 2, exchange it with the element at blue, then decrease blue by one. 
Since the swapped element is the one to be checked next, do not increment white here.

1.If it is 0, exchange it with the element at red, then increment both red and white.
2.If it is 1, only white is moved forward.
3.If it is 2, exchange it with the element at blue, then decrease blue by one. Since the swapped element is the one to be checked next, do not increment white here.
Once the loop finalizes, the array will have been organized.

Complexity
Time Complexity: O(n) — Each element is processed at most once in a single traversal of the array.
Space Complexity: O(1) — Only a constant amount of extra space is used (three pointers).

Code: C++
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red=0;
        int white=0;
        int blue=nums.size()-1;

        while(white<=blue) {
           if(nums[white]==0) {
              swap(nums[white], nums[red]);
               red++;
               white++;
            } 
           else if(nums[white]==1) {
              white++;
            } 
           else {
              swap(nums[white], nums[blue]);
              blue--;
            }
        }
    }
};
