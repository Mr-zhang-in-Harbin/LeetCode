class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        sort(timePoints.begin(),timePoints.end());
        
        int Min = Sub(timePoints[timePoints.size() - 1],timePoints[0]);
        
        for (int i = 0;i < timePoints.size() - 1;i++) {
            Min = min(Min,Sub(timePoints[i + 1],timePoints[i]));
        }
        
      return Min;  
    }
    
    int Sub(string a,string b) {
        //a - b
        int Res = 0;
        Res += (a[0] - b[0]) * 600;
        Res += (a[1] - b[1]) * 60;
        Res += (a[3] - b[3]) * 10;
        Res += (a[4] - b[4]);
        
        if (Res > 12 * 60)
            return 2 * 12 * 60 - Res;
        return Res;        
    }
};