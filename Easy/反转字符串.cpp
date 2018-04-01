class Solution {
public:
    string reverseString(string s) {
        string Res;
        for (int i = s.length() - 1;i >= 0;i--) {
            Res += s[i];
        }
        return Res;
    }
};