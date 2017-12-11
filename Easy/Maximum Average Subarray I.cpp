class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double Res = INT_MIN,sum = 0;
        for (int i=0;i<nums.size();i++) {
            if (i < k) {
                sum += (double)nums[i]/k;
            }
            else {
                Res = max(sum,Res);
                sum = sum + (double)nums[i]/k - (double)nums[i-k]/k;
            }
        }
        Res = max(sum,Res);
        return Res;
    }
};