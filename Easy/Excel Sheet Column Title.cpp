class Solution {
public:
    string convertToTitle(int n) {
        string res;
        while (n != 0){
            char temp = (n - 1) % 26 + 65;
            res.insert(0,1,temp);
            n = (n- 1) / 26;
        }
        return res;
    }
};
