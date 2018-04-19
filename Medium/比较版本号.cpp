class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int> V1,V2;
        
        ToInt(version1,V1);
        ToInt(version2,V2);
        
        int L1 = V1.size();
        int L2 = V2.size();
        
        //cout<<"L1 "<<L1<<" L2 "<<L2<<endl;
        
        for (int i = 0;i < min(L1,L2);i++){
            if (V1[i] > V2[i])
                return 1;
            else if (V1[i] < V2[i])
                return -1;
        }
        
        if (L1 > L2) 
            if (IfZero(V1,L2))
                return 0;
            else return 1;
        else if (IfZero(V2,L1))
            return 0;
        else return -1;
        
    }
    
    void ToInt(string v,vector<int>& A) {
        int temp = 0;
        for(int i = 0;i < v.size();i++) {
            if (v[i] == '.') {
                A.push_back(temp);
                temp = 0;
            }
            else temp = temp * 10 + v[i] - '0';
        }
        A.push_back(temp);
        return;
    }
    
    bool IfZero(vector<int> s,int begin) {
        for (int i = begin;i < s.size();i++)
            if (s[i] > 0)
                return false;
        return true;
    }
    
};