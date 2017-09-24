class Solution {
public:
//     bool isEqual(string s,int &i,int &j){
//         if (i < 0 || j < 0 || i > s.length() || j > s.length())
//             return true;
//         if ((s[j] < 'A' && s[j] > '9') || s[j] < '0' || s[j] > 'z' || (s[j] > 'Z' && s[j] < 'a')){
//             j--;            
//             return isEqual(s,i,j);
//         }
//         if ((s[i] < 'A' && s[i] > '9') || s[i] < '0' || s[i] > 'z' || (s[i] > 'Z' && s[i] < 'a')){
//             i++;            
//             return isEqual(s,i,j);
//         }
//         if (s[i] >= 'A' && s[i] <= 'Z')
//             s[i] += 32;
//         if (s[j] >= 'A' && s[j] <= 'Z')
//             s[j] += 32;
//         return s[i] == s[j];
//     }
    
    bool isPalindrome(string s) {
        int n = s.length();
        if (n == 0)
            return true;
        for (int i = 0, j = n - 1; i < j; i++, j--) {
            while (isalnum(s[i]) == false && i < j) i++;
            while (isalnum(s[j]) == false && i < j) j--;
            if (toupper(s[i]) != toupper(s[j])) return false;
        }    
        return true;
    }
};
