class Solution {
public:
    string Temple;
    vector<string> Res;
    vector<string> generateParenthesis(int n) {
        Every(n,0);
        return Res;
    }
    
    void Every(int Left,int Right) {
        //输入还能加入的左，右括号的个数
        if (Right == 0 && Left == 0) {
            Res.push_back(Temple);
            return;
        }
        if (Left == 0) {
            Temple += ')';
            Every(Left,Right - 1);
            int length = Temple.size();
            Temple.erase(length-1);
            return;
        }
        else if (Right == 0) {
            Temple += '(';
            Every(Left - 1,Right + 1);
            int length = Temple.size();
            Temple.erase(length-1);            
            return;
        }
        else {
            Temple += ')';
            Every(Left,Right - 1);
            int length = Temple.size();
            Temple.erase(length-1);
            
            Temple += '(';
            Every(Left - 1,Right + 1);
            length = Temple.size();
            Temple.erase(length-1);
            return;
        }
    }
};