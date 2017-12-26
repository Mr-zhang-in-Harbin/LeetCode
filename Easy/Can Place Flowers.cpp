class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int res = 0,size = flowerbed.size();
        for (int i = 0;i < size;i++) {
            if (flowerbed[i] == 0) {
                int count = 0;
                for (; i < size && flowerbed[i] == 0;i++) {                
                    if (i == 0)
                        count++;
                    if (i == size - 1)
                        count++;
                    count++;
                }
                res += (count - 1)/2;
            }
        }
        return n > res?false:true;
    }
};