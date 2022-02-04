class Solution {
public:
    
    bool binarySearchRow(vector<vector<int>>& matrix, int target, int row, int cols) {
        int low = 0, high = cols-1;
        
        while (low <= high) {
            int mid = (low + high) / 2;
            int midElement = matrix[row][mid];
            if (target == midElement) {
                return true;
            } else if (target < midElement) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return false;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(), cols = matrix[0].size();
        int lowRow = 0, highRow = rows - 1;
            
        for (int row = 0; row < rows; row++) {
            int midRow = (lowRow + highRow) / 2;
            
            if (target >= matrix[midRow][0] && target <= matrix[midRow][cols-1]) {
                if (binarySearchRow(matrix, target, midRow, cols)) {
                    return true;
                }
            } else if (target < matrix[midRow][0]) {
                highRow = midRow - 1;
            } else {
                lowRow = midRow + 1;
            }
        }
        
        return false;
    }
};