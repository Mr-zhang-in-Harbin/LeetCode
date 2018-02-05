class Solution {
public:
    vector<vector<int>> Res;
    vector<int> Temple;
    vector<vector<int>> subsets(vector<int>& nums) {
        EachSet(nums,0);
        return Res;
    }
    
    void EachSet(const vector<int>& nums,int position) {
        if (position >= nums.size()) {
            Res.push_back(Temple);
            return;
        }
        else {
            EachSet(nums,position + 1);
            Temple.push_back(nums[position]);
            EachSet(nums,position + 1);
            Temple.pop_back();
            return;
        }
    }
};