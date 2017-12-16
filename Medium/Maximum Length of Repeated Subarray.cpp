class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        int m = A.size(), n = B.size();
        if (!m || !n) return 0;
        vector<int> dp(n + 1);
        int res = 0;
        for (int i = m - 1; i >= 0; i--) {
            for (int j = 0; j < n; j++) {
                res = max(res, dp[j] = A[i] == B[j] ? 1 + dp[j + 1] : 0);
            }
        }
        return res;
    }
};