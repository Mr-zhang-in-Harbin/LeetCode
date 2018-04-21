class Solution {
public:
    string customSortString(string S, string T) {
        
        vector<int> rank (26, numeric_limits<int>::max());
        
        for(int i = 0;i < S.length();i++)
            rank[S[i] - 'a'] = i;
        
        sort(T.begin(),T.end(),[&rank](char& a,char& b) {return rank[a - 'a'] < rank[b - 'a'];});
        
        return T;
        
    }
};