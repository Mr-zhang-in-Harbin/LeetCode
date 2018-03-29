class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> Res;
        for (int i = 0;i < findNums.size();i++) {
            for (int j = 0;j < nums.size();j++) {
                if (nums[j] == findNums[i]) {
                    while (j < nums.size() && nums[j] <= findNums[i]) {
                        j++;
                    }
                    if (j < nums.size())
                        Res.push_back(nums[j]);
                    else Res.push_back(-1);
                    break;
                }
            }
        }
        return Res;
    }
};