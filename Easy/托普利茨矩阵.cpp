class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for (int i = 0;i < matrix.size();i++)
            if (!IfLine(matrix,i,0))
                return false;
        for (int i = 1;i < matrix[0].size();i++)
            if (!IfLine(matrix,0,i))
                return false;
        return true;
    }
    
    bool IfLine(vector<vector<int>> matrix,int m,int n) {
        while (m < (matrix.size()  - 1) && n < (matrix[0].size() - 1)) {
            if (matrix[m][n] != matrix[m + 1][n + 1]) {
                cout<<"M "<<m<<" N "<<n<<endl;
                return false;
                
            }
            m++;
            n++;
        }
        return true;
    }
};