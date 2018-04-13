class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int Res = 0;
        int zero = 0,one = 0;
        int count = 0;
        while (1) {
            zero = 0;
            one = 0;
            count = 0;
            for (int j = 0;j < nums.size();j++) {
                if (nums[j] % 2 == 1)
                    one++;
                else zero++;
                nums[j] >>= 1;
                if (nums[j])
                    count++;
            }
            Res += zero * one;
            //cout<<"Count "<<count<<endl;
            if (count == 0)
                return Res;
        }
    }
};