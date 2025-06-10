Intuition :
The task is to find if there is any duplicate element in the list. The easiest way to spot the duplicates is by initially sorting the list. 
Once the list is sorted, the duplicate items will be side by side, therefore a single pass will suffice to find them.

Approach :
1. Sort the array in non-decreasing order.This makes sure that any identical elements will be next to each other.
2. Walk through the array and check each element with the next one.
3. In case, any two neighboring elements are the same, we return true, which will mean that there is a duplicate.
4. When we finish the traversal and no duplicates are found, we return false.

Complexity
Time Complexity: O(nlog⁡n)— Sorting the array requires O(nlog⁡n), while the single pass through the array takes O(n).
Space Complexity: O(1) — If the sorting algorithm is in-place (e.g. the one in C++ STL sort()), then no extra memory is required.

Code: C++
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for (int i=0; i< nums.size()-1;i++) {
            if(nums[i]==nums[i+1]) {
                return true; 
            }
        }
        return false; 
    }
};
