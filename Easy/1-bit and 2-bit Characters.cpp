class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i = 0;
        bool res;
        for (;i < bits.size() - 1;) {
            if (bits[i] == 1) {
                i += 2;
                res = false;
            }
            else {
                i++;
                res = true;
            }
        }
        if (i == bits.size())
            return res;
        else return true;
    }
};