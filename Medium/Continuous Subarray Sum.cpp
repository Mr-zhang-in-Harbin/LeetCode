class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {     
        if (nums.size() <= 1)
            return false;
        for (int i = 1;i < nums.size();i++) 
            if (nums[i - 1] == 0 && nums[i] == 0)
                return true;
        
        if (k != 0) {
            k =abs(k);
            nums[0] = nums[0] % k == 0?-1 * k:nums[0] % k;
            for (int i = 1;i < nums.size();i++) {
                nums[i] = (nums[i - 1] + nums[i]) % k;
                if (nums[i] == nums[i - 1])
                    nums[i] = -1 * k;
            }
            sort(nums.begin(),nums.end());
            
        
            if (nums[0] == 0)
                return true;
            for (int i = 1;i < nums.size();i++) {
                if (nums[i] == 0)
                    return true;
                else if (nums[i] >= 0 && nums[i] == nums[i - 1])
                    return true;
            }
            return false;
        }
        return false;
    }
};