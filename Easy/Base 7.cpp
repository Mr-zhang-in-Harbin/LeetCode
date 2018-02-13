class Solution {
public:
    string convertToBase7(int num) {
        return to_string(ToBase7(num));
    }
    
    int ToBase7(int Num) {
        if (Num < 0)
            return -1 * ToBase7(-1 * Num);
        int Res = 0,Lev = 1;
        while (Num) {
            Res += Lev * (Num % 7);
            Num /= 7;
            Lev *= 10;
        }
        return Res;
    }
};