class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1)
            return 0;
        int n = nums.size(),multy = 1,count = 0,left = 0;
        for (int i = 0;i < n;i++) {
            multy *= nums[i];
            while(multy >= k)
                multy /= nums[left++];
            count += i - left + 1;
        }
        return count;
    }
};