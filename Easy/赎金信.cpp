class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int a[125];
        
        for (int i = 0;i < 125;i++)
            a[i] = 0;
        
        for (int i = 0;i < magazine.size();i++)
            a[magazine[i]]++;
        for (int i = 0;i < ransomNote.size();i++) {
            a[ransomNote[i]]--;
            if (a[ransomNote[i]] < 0)
                return false;
        }
        return true;
    }
};