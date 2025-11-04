https://leetcode.com/problems/three-consecutive-odds/
Problem : 1550. Three Consecutive Odds

Intuition :
Given an array of integers, determine whether it contains three consecutive odd numbers.
We need to traverse the array and maintain a counter that keeps track of the number of consecutive odd numbers.
Firstly, if an even number is found in the sequence, the counter is reset to zero.
Secondly, if an odd number is encountered, the counter is incremented by one.
Thirdly, if the counter ever gets to 3, the function should immediately return true.

When the loop ends without finding three odd numbers in a row, the function returns false.

Approach :
Initialize an integer count = 0 in order to record consecutive odd numbers.
For each element in the array:
1.Check if the current number is even (arr[i] % 2 == 0), then the count should be reset to 0.
2.If the number is odd, count should be incremented by 1.
3.If count is equal to 3, then immediately return true.

If the loop is finished without count reaching 3, then return false.

Complexity
Time Complexity: O(n) — we traverse the array once
Space Complexity: O(1) — we use only a single counter variable.

Code: C++
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
    int count=0;
    for (int i=0;i<arr.size();i++) {
        if(arr[i]%2==0) {
            count=0;
        } 
        else {
            count++;
        }
        if(count==3) {
            return true;
        }
    }
    return false;
}
};
