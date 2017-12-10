class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int chance = 0;
        for (int i = 0;i < nums.size() - 1;i++) {
            if (nums[i] > nums[i+1]) {
                chance++;
                if (i-1<0 || nums[i-1] <= nums[i+1]) nums[i] = nums[i+1];
                else nums[i+1] = nums[i];
            }
            if (chance >= 2)
                return false;
        }
        return true;
    };
};