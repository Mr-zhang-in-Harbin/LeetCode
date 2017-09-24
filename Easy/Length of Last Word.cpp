class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        if (n == 0)
            return 0;
        int count = 0;
        int i = n-1;
        while (s[i] == ' ')
            i--;
        for (; i >= 0; i--)
        {
            if (s[i] != ' ')
                count++;
            else return count;
        }
        return count;
    }
};