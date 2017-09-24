class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n <= 1)
            return 0;
        int max = 0;
        int now = prices[0];
        for (int i = 1; i < n; i++)
        {
            if (prices[i] < now)
                now = prices[i];
            else if (prices[i] - now > max)
                max = prices[i] - now;
        }
        return max;
    }
};
