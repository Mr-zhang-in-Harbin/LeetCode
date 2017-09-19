class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Max = nums[0];
        int temp = nums[0] < 0 ? 0 : nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            temp += nums[i];
            if (temp > Max)
                Max = temp;
            if (temp < 0)
                temp = 0;
        }
        return Max;
    }
};
