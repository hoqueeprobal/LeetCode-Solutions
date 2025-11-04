https://leetcode.com/problems/rotate-image/
Problem : 48. Rotate Image

Intuition:
Rotating a 2D matrix 90 degrees clockwise in-place requires a transformation that rearranges elements without using extra space.The first step is to transpose the matrix — flipping it over its main diagonal, which effectively turns rows into columns.However, this doesn't complete the rotation. To reach the final arrangement, we then reverse each row which reorders the elements correctly for a 90-degree clockwise rotation. This two-step process is both simple and efficient, allowing the rotation to be done cleanly and in-place.

Approach:
The first step is to transpose the matrix in-place by swapping each element at (i, j) with the element at (j, i) for all i < j. After transposition, the elements are partially arranged but not yet in their final positions. The next step is to reverse each row, which reorders the elements to complete the 90-degree clockwise rotation. By combining these two steps, we achieve the rotation efficiently and without extra space.

Complexity
Time Complexity: O(n*n) - We perform two passes over the n∗n matrix.
Space Complexity: O(1) — The rotation is done in-place.

Code: C++
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
         for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
         for(int i=0;i<n;i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
