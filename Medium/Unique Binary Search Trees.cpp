class Solution {
public:
    int numTrees(int n) {
        if (n <= 1)
            return 1;
        else {
            vector<int> Res;
            Res.push_back(1);
            Res.push_back(1);
            for (int i = 2;i <= n;i++) {
                int Temp = 0;
                for (int j = 1;j <= i;j++)
                    Temp += Res[j - 1] * Res[i - j];
                Res.push_back(Temp);
            }
            return Res[n];
        }
    }
};