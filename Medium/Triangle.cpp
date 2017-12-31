class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        int *Res = new int [n];
        for (int i = 0;i < n;i++)
            Res[i] = triangle[n - 1][i];
        for (int i = n - 2;i >= 0;i--)
        {
            for (int j = 0;j <= i;j++)
            {
                    Res[j] = min(Res[j] + triangle[i][j],Res[j + 1] + triangle[i][j]);
            }
        }
        return Res[0];
    }
};