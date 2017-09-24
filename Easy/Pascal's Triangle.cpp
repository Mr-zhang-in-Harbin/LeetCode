class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for (int i = 1; i <= numRows; i++)
        {
            res.push_back(vector<int>());
            res[i-1].push_back(1);
            for (int j = 1; j < i - 1; j++)
            {
                res[i-1].push_back(res [i-2][j] + res[i-2][j-1]);
            }
            if (i > 1)
            res[i-1].push_back(1);
        }
        return res;
    }
};
