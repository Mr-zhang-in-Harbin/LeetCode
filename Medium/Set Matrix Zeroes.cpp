class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(),m = matrix[0].size();
        if (!n || !m)
            return;
        int *N_Zero = new int[n];
        int *M_Zero = new int[m];
        for (int i = 0;i < n;i++)
            N_Zero[i] = 1;
        for (int i = 0;i < m;i++)
            M_Zero[i] = 1;
        for (int i = 0;i < n;i++)
            for (int j = 0;j < m;j++)
                if (matrix[i][j] == 0) {
                    N_Zero[i] = 0;
                    M_Zero[j] = 0;
                    break;
                }
        for (int j = 0;j < m;j++)
            if (M_Zero[j] != 0) {
                for (int i = 0;i < n;i++)
                    if(matrix[i][j] == 0) {
                        M_Zero[j] = 0;
                        break;
                    } 
            }
        for (int i = 0;i < n;i++)
            if (N_Zero[i] == 0) {
                for (int j = 0;j < m;j++)
                    matrix[i][j] = 0;
            }
        for (int i = 0;i < m;i++)
            if (M_Zero[i] == 0) {
                for (int j = 0;j < n;j++)
                    matrix[j][i] = 0;
            }
    }
};