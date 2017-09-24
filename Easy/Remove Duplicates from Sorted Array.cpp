class Solution {
public:
    int removeDuplicates(vector<int>& nums) {       
        int count = !nums.empty();
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > nums[count-1])
                nums[count++] = nums[i];
        }
        return count;
    }
};