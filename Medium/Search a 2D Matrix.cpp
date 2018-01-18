class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        if (!n)
            return false;
        int m = matrix[0].size();
        if (!m)
            return false;
        if (target < matrix[0][0] || target > matrix[n - 1][m - 1])
            return false;
        int i = 0;
        while (i < n - 1 && matrix[i + 1][0] <= target)
            i++;
        
        for (int j = 0;j < m;j++)
            if (matrix[i][j] == target)
                return true;
            else if (matrix[i][j] > target)
                return false;
        return false;
    }
};