class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int Get = 0;
        for (int i = 0;i < n - 1;i++) {
            Jump(nums,i,Get);
            if (Get <= i)
                return false;
        }
        return true;
    }
    void Jump(vector<int>& nums,int i,int &Get) {
        Get = max(Get,nums[i] + i);
    }
        
};