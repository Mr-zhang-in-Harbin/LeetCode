class Solution {
public:
    string getHint(string secret, string guess) {
        vector<char> L1,L2;
        int cow = 0;
        int bull = 0;
        for (int i = 0;i < secret.length();i++) {
            if (secret[i] == guess[i])
                bull++;
            else {
                L1.push_back(secret[i]);
                L2.push_back(guess[i]);
            }
        }
        
        sort(L1.begin(),L1.end());
        sort(L2.begin(),L2.end());
        
        int i = 0,j = 0;
        while (i < L1.size() && j < L2.size()) {
            if (L1[i] == L2[j]) {
                cow++;
                i++;
                j++;
            }
            else if (L1[i] > L2[j])
                j++;
            else if (L1[i] < L2[j])
                i++;
        }
        
        string Res = "";
        Res += to_string(bull);
        Res+= "A";
        Res += to_string(cow);
        Res += "B";
        return Res;
        
    }
};