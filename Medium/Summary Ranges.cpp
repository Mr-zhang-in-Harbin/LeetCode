class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        vector<string> Res;
        for (int i = 0;i < n;i++)
        {
            int start = i,end = i;
            while(nums[end] == nums[start] + end - start)
                end++;
            if (end == start + 1)
                Res.push_back(to_string(nums[start]));
            else Res.push_back(to_string(nums[start]) + "->" + to_string(nums[end - 1]));
            i = end - 1;
        }
        return Res;
    }
};