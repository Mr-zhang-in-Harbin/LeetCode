class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        set<int> cand;
        for (int i = 0; i < nums.size(); i++) {
            if (i > k) cand.erase(nums[i-k-1]);
            if (!cand.insert(nums[i]).second) return true;
        }
        return false;
    }
};