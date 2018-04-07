class Solution {
public:
    int findLHS(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        sort(nums.begin(),nums.end());
        int Now = nums[0];
        int pre = 1;
        int lat = 0;
        int Max = 0;
        for (int i = 1;i < nums.size();i++) {
            if (nums[i] == Now)
                pre++;
            else if (nums[i] == Now + 1) {
                if (lat != 0)
                    Max = max(pre + lat,Max);
                lat = pre;
                pre = 1;
                Now = nums[i];
            }
            else {
                if (lat != 0)
                    Max = max(lat + pre,Max);
                lat = 0;
                pre = 1;
                Now = nums[i];
            }
        }
        if (lat != 0)
            Max = max(pre + lat,Max);
        
        return Max;
    }
};