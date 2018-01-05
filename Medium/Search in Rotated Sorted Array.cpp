class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if (n < 1)
            return -1;
        if (nums[0] == target)
            return 0;
        else if (nums[0] < target)
        {
            for (int i = 1;i < n && nums[i - 1] < nums[i];i++)
                if (nums[i] == target)
                    return i;
                else if (nums[i] > target)
                    return -1;
            return -1;
        }
        else {
            int i = 1;
            while (nums[i] > nums[i - 1] && i < n)
                i++;
            for (;i < n;i++)
                if (nums[i] == target)
                    return i;
                else if (nums[i] > target)
                    return -1;
            return -1;
        }
    }
};