class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool zero = (n % 2 == 0);
        while (n /= 2){
            if (zero == (n % 2 == 0))
                return false;
            else zero = !zero;
        }
        return true;
    }
};