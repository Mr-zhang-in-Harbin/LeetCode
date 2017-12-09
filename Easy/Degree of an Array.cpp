class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        if (nums.size() < 2) return nums.size();
        int Res = nums.size();
        unordered_map<int, int> startIndex, count;
        int fre = 0,Length = 0;
        for (int i = 0;i < Res;i++) {
            if (startIndex.count(nums[i]) == 0) startIndex[nums[i]] = i;
            count[nums[i]]++;
            if (count[nums[i]] == fre)
                Length = min(i - startIndex[nums[i]] + 1,Length);
            if (count[nums[i]] > fre) {
                Length = i - startIndex[nums[i]] + 1;
                fre = count[nums[i]];
            }
        }
        return Length;
    }
};
