class Solution {
public:
    int n_level(int n) {
        if (n == 1)
            return 1;
        else return  (11 - n) * n_level(n - 1);
    }
    
    int countNumbersWithUniqueDigits(int n) {
        if (n == 0)
            return 1;
        else if (n == 1)
            return 10;
        else return 9 * n_level(n) + countNumbersWithUniqueDigits(n - 1);
    }
};