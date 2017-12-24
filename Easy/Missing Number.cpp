class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int count = 0,n = nums.size();
        for (int i = 0;i < n;i++)
            count += nums[i];
        return (n + 1) * n / 2 - count;
    }
};
