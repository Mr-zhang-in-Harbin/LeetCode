class Solution {
public:
    int kthGrammar(int N, int K) {
        if (N == 1)
            return 0;
        else {
            int t = kthGrammar(N - 1,(K + 1) / 2);
            if (K % 2 == 0)
                return t == 1?0:1;
            else return t;
        }
    }
};