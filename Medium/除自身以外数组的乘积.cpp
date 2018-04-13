class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> Res(n,1);
        
        int l = 1;
        int r = 1;
        
        for (int i = 0;i < n;i++) {
            Res[i] *= l;
            Res[nums.size() - 1 - i] *= r;
            l *= nums[i];
            r *= nums[n - 1 - i];
        }
        
        return Res;
    }
};
