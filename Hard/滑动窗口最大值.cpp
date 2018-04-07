class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> Res;
        if (nums.size() == 0)
            return Res;
        
        int Max = nums[0];
        for (int i = 1;i < k;i++) {
            Max = max(nums[i],Max);
        }
        Res.push_back(Max);
        for (int l = 0 ;l + k < nums.size();l++) {
            if (Res[l] != nums[l])
                Res.push_back(max(Res[l],nums[l + k]));
            else {
                int Max = nums[l + 1];
                for (int i = 0;i < k;i++)
                    Max = max(Max,nums[i + l + 1]);
                Res.push_back(Max);
            }
        }
        
        return Res;
    }
};