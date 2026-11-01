class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        // staircase technique:
        int row = 0,col = n-1;
        while(row<m && col>=0)
        {
            if(matrix[row][col] == target) return true;
            else if(matrix[row][col] < target) row++;  // array to the ledt is sorted in descending order;
            else col--; // array to the down is sorted in descending order;
        }
       return false;
    }
};