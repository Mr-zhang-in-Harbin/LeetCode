class Solution {
public:
    vector<vector<int>> Res;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        
        show(candidates);
        
        vector<int> now;
        
        if (candidates.size() == 0)
            return Res;
        find(candidates,target,0,now);
        return Res;
        
    }
    
    void find(vector<int>& candidates,int target,int begin,vector<int>& now) {
        if (target == 0) {
            Res.push_back(now);
            return;            
        }
        else if (target < 0 || begin >= candidates.size() || candidates[begin] > target)
            return;
        for (int i = begin;i < candidates.size();i++) {
            if (candidates[i] > target)
                return;
            else if (i > begin && candidates[i] == candidates[i-1]) continue;
            else {
                now.push_back(candidates[i]);
                //show(now);
                find(candidates,target - candidates[i],i + 1,now);
                now.erase(now.end() - 1);
            }
        }
        return;
    }
    
    void show(vector<int> t) {
        for(int i = 0;i < t.size();i++)
            cout<<t[i]<<" ";
        cout<<endl;
    }
    
};