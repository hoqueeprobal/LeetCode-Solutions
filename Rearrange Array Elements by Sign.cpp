https://leetcode.com/problems/rearrange-array-elements-by-sign/
Problem :2149. Rearrange Array Elements by Sign

Intuition :
First we may split numbers into lists of positive and negative respectively then merge them one by one. We only need to ensure that the first element in the list is positive. ​‍​

Approach :
1.​‍​‌‍​‍‌ Set up two vectors: positive to hold all positive elements and negative to hold all negative elements from the array.
2. Iterate through the array nums and for each element insert it into one of these two vectors.
3. Form the resulting array by taking one element from positive and then one from negative repeatedly.
4. Output the resulting ​‍​‌‍​‍‌array.

Complexity :
Time Complexity: O(n) We go through the array two times. one for separating the elements and another for combining them.
Space Complexity: O(n) We use additional space to store positive and negative numbers separately.

Code: C++
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive,negative,result;
        for(int i=0; i<nums.size();i++) {
            if(nums[i]>0) {
                positive.push_back(nums[i]); 
                }
            else {
                negative.push_back(nums[i]);}
        }
        
        int n=positive.size();
        for(int i=0;i<n;i++) {
            result.push_back(positive[i]);
            result.push_back(negative[i]);
        }
        return result;
    }
}; 
