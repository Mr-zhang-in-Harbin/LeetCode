class Solution {
public:
    bool judgeSquareSum(int c) {
        if (c == 0 || c == 1)
            return true;
        for (int i = 0;i * i <= c / 2;i++) {
            int t = sqrt(c - i * i);
            //cout<<t<<endl;
            if (t * t + i * i == c)
                return true;
        }
        return false;
    }
};