class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector <int> Res;
        for (int i = 0;i < n;i++) {
            if (nums[i] > target) {
                Res.push_back(-1);
                Res.push_back(-1);
                return Res;
            }
            else if (nums[i] == target) {
                Res.push_back(i);
                while (nums[i] == target && i < n)
                    i++;
                Res.push_back(i - 1);
                return Res;
            }              
        }
        Res.push_back(-1);
        Res.push_back(-1);
        return Res;
    }
};