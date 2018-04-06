class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        else if (nums.size() == 1)
            return max(0,nums[0]);
        else if (nums.size() == 2)
            return max(0,max(nums[0],nums[1]));
        int a = 0,b = 0;
        a = nums[0];
        b = max(nums[0],nums[1]);
        for (int i = 2;i < nums.size();i++) {
            if (i % 2 == 0)
                a = max(a + nums[i],b);
            else b = max(b + nums[i],a);
        }
        return max(a,b);
    }
    
};
