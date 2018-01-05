class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;
        while (i >= 0 && nums[i] >= nums[i + 1])
            i--;
        if (i == -1)//说明是全降序的，已经是最大的了
        {
            i = 0;
            for (int k = n - 1;k > i;k--,i++)
                swap(nums[i],nums[k]);
            return;
        }
        else {
            int Min = i;
            while(i + 1 < n && nums[Min] < nums[i + 1])
                i++;
            swap(nums[Min],nums[i]);
            for (int k = Min + 1,i = n - 1;k < i;k++,i--)
                swap(nums[k],nums[i]);
        }
        return;
    }
};