class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n < 2)
            return 0;
        int total = 0;
        int max = 0;
        int now = prices[0];
        for (int i = 1; i < n; i++)
        {
            if (prices[i] < prices[i-1])
            {
                now = prices[i];
                total += max;
                max = 0;
            }
            else if (prices[i] <= now){
                now = prices[i];
                total += max;
                max = 0;
            }
            else if (prices[i] - now > max)
                max = prices[i] - now;
        }
        total += max;
        return total;
    }
};
