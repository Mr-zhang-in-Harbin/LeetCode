class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;
        if (x == 0)
            return true;
        int lastpart=0;
        while (x / 10 > lastpart){
            lastpart=lastpart*10+x%10;
            x/=10;
        }
        return (x == lastpart || x / 10 == lastpart) ;
    }
};
