class Solution {
public:
    
    int GetScore(const vector<int>& nums,int p1,int p2,int front,int end,int turn) {
        //turn == 1 for Player1 to choose;
        if (front > end)
            return p1;
        if (turn == 1)
            return max(GetScore(nums,p1 + nums[front],p2,front + 1,end,turn * -1),GetScore(nums,p1 + nums[end],p2,front,end - 1,turn * -1));
        else if (turn == -1)
            return min(GetScore(nums,p1,p2 + nums[front],front + 1,end,turn * -1),GetScore(nums,p1,p2 + nums[end],front,end - 1,turn * -1));
    }    
    
    bool PredictTheWinner(vector<int>& nums) {
        int totol = 0;
        for (int i = 0;i < nums.size();i++)
            totol += nums[i];
        if (2 * GetScore(nums,0,0,0,nums.size() - 1,1) < totol)
            return false;
        else return true;
    }

    
};