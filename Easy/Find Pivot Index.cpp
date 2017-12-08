class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if (nums.size() <= 2)
            return -1;
        for (int i = 1;i < nums.size(); i++) {
            nums[i] = nums [i] + nums[i-1];
        }
        long long int Res = nums[nums.size() - 1];
        for (int i = 0;i < nums.size();i++)
            if (Res - nums[i] == (i == 0 ? 0:nums[i-1]))
                return i;
        return -1;
    }
};
