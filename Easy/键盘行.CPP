class Solution {
public:
    vector<char> one = {'q','w','e','r','t','y','u','i','o','p','Q','W','E','R','T','Y','U','I','O','P'};
    vector<char> two = {'a','s','d','f','g','h','j','k','l','A','S','D','F','G','H','J','K','L'};
    vector<char> three = {'z','x','c','v','b','n','m','Z','X','C','V','B','N','M'};
    vector<string> findWords(vector<string>& words) {
        vector<string> Res;
        for (int i = 0;i < words.size();i++) {
            int mode;
            if (find(one.begin( ),one.end( ),words[i][0]) != one.end())
                mode = 1;
            else if (find(two.begin( ),two.end( ),words[i][0]) != two.end())
                mode = 2;
            else mode = 3;
            //cout<<mode<<endl;
            for (int j = 1;j < words[i].size();j++) {
                if (mode == 1) {
                    if (find(one.begin( ),one.end( ),words[i][j]) == one.end()) {
                        mode = 4;
                        break;  
                    }                 
                }
                else if (mode == 2) {
                    if (find(two.begin( ),two.end( ),words[i][j]) == two.end()) {
                        mode = 4;
                        break;  
                    }                 
                }
                else if (find(three.begin( ),three.end( ),words[i][j]) == three.end()) {
                        mode = 4;
                        break;  
                    }                 
            }
            if (mode != 4)
                Res.push_back(words[i]);
        }
        return Res;
    }
};