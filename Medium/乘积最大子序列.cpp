class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int front = 1;
        int back = 1;
        
        int Res = INT_MIN;
        for (int i = 0;i < n;i++) {
            front *= nums[i];
            back *= nums[n - i - 1];
            Res = max(Res,max(front,back));
            if (front == 0)
                front = 1;
            if (back == 0)
                back = 1;
        }
        
        return Res;
    }
};