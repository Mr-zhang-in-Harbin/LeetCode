class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.length(), n = needle.length();
        if (m == 0 && n == 0)
            return 0;
        else if (m == 0)
            return -1;
        for (int i = 0; i < m - n + 1; i++)
        {
            int j =0;
            for (; j < n; j++)
                if (haystack[i+j] != needle [j]){
                    j = n + 1;
                }
            if (j == n)
                return i;
        }
        return -1;
    }
};
//没有右移优化 
