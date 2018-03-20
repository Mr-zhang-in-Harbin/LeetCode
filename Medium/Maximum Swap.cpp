class Solution {
public:
    
    int FindMax(string temp,int star,int end) {
        int max = end;
        for (int i = end;i > star;i--) {
            if (temp[i] > temp[max])
                max = i;
        }
        if (temp[max] > temp[star])
            return max;
        else return -1;
    }
    
    int maximumSwap(int num) {
        string temp = to_string(num);
        
        if (temp.size() < 1)
            return num;
        
        for (int i = 0;i < temp.size();i++) {
            int Now = FindMax(temp,i,temp.size());
            if (Now != -1) {
                swap(temp[i],temp[Now]);
                break;                
            }
        }
        
        int Res = atoi(temp.c_str());
        return Res;
        
    }
};