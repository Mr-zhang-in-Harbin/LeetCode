class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num == 1)
            return false;
        int Res = 1;
        for (int i = 2;i < sqrt(num);i++)
            if (num % i == 0)
                Res = Res + i + num / i;
        return Res == num;
    }
};