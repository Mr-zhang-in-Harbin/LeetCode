class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector <int> Res(cost.size() + 1);
        for (int i = 2;i <= cost.size();i++)
            Res[i] = min(cost[i-1] + Res[i-1],cost[i-2] + Res[i-2]);
        return Res.back();
    }
};