class NumArray {
public:
    vector<int> Save;
    NumArray(vector<int> nums) {
        int temp = 0;
        for (int i = 0;i < nums.size();i++) {
            temp += nums[i];
            Save.push_back(temp);
        }
    }
    
    int sumRange(int i, int j) {
        if (i == 0)
            return Save[j];
        return Save[j] - Save[i - 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */