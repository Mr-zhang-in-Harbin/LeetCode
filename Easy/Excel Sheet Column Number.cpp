class Solution {
public:
    int titleToNumber(string s) {
        int res = 0;
        for (int i = 0; i< s.size(); i++)
        {
            res = res *26 + s[i] -64;
        }
        return res;
    }
};
