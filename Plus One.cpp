class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int c = 1;
        int i = digits.size() - 1;
        while (i >= 0 && c == 1)
        {
            int a = digits[i] + c;
            digits[i] = a % 10;
            c = a / 10;
            i--;
        }
        if (c == 1)
            digits.insert(digits.begin(), 1);
        return digits;
    }
};
