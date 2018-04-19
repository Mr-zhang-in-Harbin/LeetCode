class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        int temp = 0;
        int begin = 0;
        vector<string> Res;
        for (int i = 0;i < words.size();i++) {
            //cout<<"Exam "<<i<<endl;
            if ((temp == 0?0:(temp + 1))  + words[i].size() > maxWidth) {
                Link(Res,words,begin,i - 1,maxWidth,temp);
                begin = i;
                i--;
                temp = 0;
            }
            else if (temp != 0)
                temp = temp + words[i].size() + 1;
            else temp += words[i].size();
        }
        if (temp != 0)
            LinkSpecial(Res,words,begin,words.size() - 1,maxWidth,temp);
        return Res;
    }
    
    void Link(vector<string>& Res,vector<string> words,int begin,int end,int width,int Hastake) {
        int num = end - begin + 1;
        if (num == 1) {
            string Temp = words[begin];
            while (Temp.length() < width)
                Temp += ' ';
            Res.push_back(Temp);
            return;
        }
        else {
            int each = (width - Hastake + num - 1) / (num - 1);            
            int plus = (width - Hastake + num - 1) - each * (num - 1);
            string Temp;
            //cout<<"Each "<<each<<" Plus "<<plus<<endl;
            for (int i = begin;i <= end;i++) {
                Temp += words[i];
                if (plus)
                    Temp += ' ',plus--;
                if (i != end)
                    for (int j = 0;j < each;j++)
                        Temp += ' ';
            }
            Res.push_back(Temp);
            return;
        }
        //cout<<"Link "<<begin<<" To "<<end<<" Space "<<width - Hastake + num - 1<<endl;
    }
    
    void LinkSpecial(vector<string>& Res,vector<string> words,int begin,int end,int width,int Hastake) {
            string Temp;
            for (int i = begin;i <= end;i++) {
                Temp += words[i];
                if (i != end)
                    Temp += ' ';
            }
            while (Temp.length() < width)
                Temp += ' ';
            Res.push_back(Temp);
            return;
        }
};