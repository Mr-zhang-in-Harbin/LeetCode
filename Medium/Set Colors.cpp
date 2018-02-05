class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0,one = 0;
        for (int i = 0;i < nums.size();i++)
            if (nums[i] == 0)
                zero++;
        else if (nums[i] == 1)
            one++;
        for (int i = 0;i < nums.size();i++)
            if (zero) {
                nums[i] = 0;
                --zero;
            }
            else if (one) {
                nums[i] = 1;
                --one;
            }
            else nums[i] = 2;
        return;
    }
};