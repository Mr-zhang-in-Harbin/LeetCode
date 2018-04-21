class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        vector<vector<int>> Res;
        for(int i = 0;i < M.size();i++)  {
            vector<int> temp;
            for (int j = 0;j < M[0].size();j++) {
                int t = 0,c = 0;
                for(int x = -1;x < 2;x++) 
                    for (int y = -1;y < 2 ;y++) {
                        if ((i + x) < 0 || (i + x) >= M.size() || (j + y) < 0 || (j + y) >= M[0].size())
                            continue;
                        else {
                            c++;
                            t += M[i + x][j + y];
                        }
                    }
                temp.push_back(t / c);
            }
            Res.push_back(temp);
        }
        return Res;
    }
};