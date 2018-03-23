class Solution {
public:
    vector<vector<int>> Res;

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        combination(temp,k,n,0);
        return Res;
    }
    
    void combination(vector<int> &temp,int k,int n,int min) {
        if (n <= min || k <= 0) 
            return;
        if (k == 1 && n > min && n < 10) {
            temp.push_back(n);
            Res.push_back(temp);
            temp.pop_back();
            return;
        }
        else {
            for (int i = min + 1;i <= 9;i++) {
                temp.push_back(i);
                combination(temp,k - 1,n - i,i);
                temp.pop_back();
            }
        }
    }
};