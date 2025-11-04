https://leetcode.com/problems/maximum-average-subarray-i/
Problem : 643. Maximum Average Subarray I

Intuition :
We​‍​‌‍​‍‌ are to find a length k subarray that has the maximum average. The naive way of doing this would be to recalculate the sum for each subarray which would make the algorithm have a time complexity of O(n × k) and thus be very inefficient.

To make the method efficient we can apply the sliding window technique. The main point is that we keep the sum of the current window of size k, and when the window moves, we update the sum in constant time — by adding the new element and removing the element that goes out of the window.

Approach :
1. Compute the sum of the first k elements — this will be our initial window.
2. Let maxSum be equal to this initial sum.
3. For i ranging from k to the length of the array do:
 i. Update the window sum by adding nums[i] and removing nums[i - k].  
 ii. Update maxSum if the current sum is greater.
4. After checking all the windows return maxSum / k as the maximum ​‍​‌‍​‍‌average.

Complexity :
Time Complexity: O(n) — each element is added and removed once.
Space Complexity: O(1) — only a few variables are used.

Code: C++
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long sum = 0;
        for(int i = 0; i < k; i++){
            sum = sum + nums[i];
        }
        long long maxsum = sum;
        for(int i = k; i < nums.size(); i++){
            sum = sum + nums[i] - nums[i - k];
            maxsum = max(maxsum, sum);
        }
        return (double)maxsum / k;
    }
};
