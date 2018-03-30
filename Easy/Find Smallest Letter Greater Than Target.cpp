class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char Min = 'z';
        char t = 'z' + 1;
        for (int i = 0;i < letters.size();i++) {
            Min = min (Min,letters[i]);
            t = letters[i] > target? min(letters[i],t):t;
        }
        if (t != target && t != 'z' + 1)
            return t;
        else return Min;
    }
};