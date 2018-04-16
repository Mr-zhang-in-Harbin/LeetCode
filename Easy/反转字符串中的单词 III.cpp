class Solution {
public:
    string reverseWords(string s) {
        int l = s.length();
        for (int i = 0;i < l;i++){
            if (s[i] == ' ')
                continue;
            for (int j = 0;i + j < l;j++) {
                if (s[i + j] == ' '){
                    reverse(s.begin() + i,s.begin() + j + i);                    
                    i += j;
                    break;
                }
                else if (i + j == l - 1) {
                    reverse(s.begin() + i,s.begin() + j + i + 1);                    
                    i += j;
                    break;
                }
            }
        }
        return s;
    }
};