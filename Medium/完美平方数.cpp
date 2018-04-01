class Solution {
public:
    int numSquares(int n) {
        if (n == 0)
            return 0;
        int t = sqrt(n);
        if (t * t == n)
            return 1;
        //特殊情况处理
        
        int* Res = new int[n + 1];
        for (int i = 0;i <= n;i++)
            Res[i] = 50;
        for (int i = 0;i * i <= n;i++)
            Res[i * i] = 1;
        
        for (int i = 2;i <= n;i++)
            for (int j = 1;j * j < i;j++) {
                Res[i] = min(Res[i],Res[i - j * j] + Res[j * j]);
            }
        
        
        return Res[n];
    }
};