class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1)
            return n;
        int Max = 1, Now = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i+1] > nums[i])
                Now++;
            else {
                Now = 1;
            }
            if (Now > Max)
                    Max = Now;
        }
        return Max;
    }
};