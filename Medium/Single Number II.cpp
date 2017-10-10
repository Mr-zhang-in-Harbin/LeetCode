class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int two = 0, three = 0;
        for (int i = 0;i < nums.size();i++)
        {
            two = (two ^ nums[i]) & ~three;
            three = (three ^ nums[i]) & ~two;
        }
        return two;
    }
};