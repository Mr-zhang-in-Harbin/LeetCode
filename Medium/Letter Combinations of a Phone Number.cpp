class Solution {
public:
    
    void Deal(string Temp,vector<string>& Res,vector<string> list,int n) {
        if (n >= list.size())
            Res.push_back(Temp);
        else {
            for (int i = 0;i < list[n].length();i++)
                Deal(Temp + list[n][i],Res,list,n + 1);
        }
    }
    
    
    vector<string> letterCombinations(string digits) {
        vector<string> Res;
        vector<string> list;
        
        if (digits.size() == 0)
            return Res;
        
        string List[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        
        for (int i = 0;i < digits.size();i++) {
            int num = digits[i] - '0';
            list.push_back(List[num]);
            
        }
        
        Deal("",Res,list,0);
        
        return Res;
    }
};