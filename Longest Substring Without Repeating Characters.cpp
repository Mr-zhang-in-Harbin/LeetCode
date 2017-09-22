class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        for (int x = 0; x < s.length(); x++)
        {
            int us[256];
            for (int i = 0; i < 256; i++)
                us[i] = 0;
            int count = 0;
            for (int i = x; i < s.length(); i++)
            {
                if (us[s[i]] == 0){
                    count++;
                    us[s[i]] = 1;
                }
                else {
                    break;
                }
                if (count > max)
                    max = count;
            }
        }
        return max;
    }
};
