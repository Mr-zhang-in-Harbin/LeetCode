class Solution {
public:
    int kEmptySlots(vector<int>& flowers, int k) {
        for (int i = 0; i < flowers.size(); i++)
        {
            bool ifhas_l = false,ifhas_r = false,ifblock_l = false,ifblock_r = false;//左右有没有符合距离条件的花,有没有阻挡 
            for (int j = 0; j < i; j++)
            {
                int temp = flowers[i] - flowers[j];
                if (abs(temp) < k + 1){
                    if (temp < 0)
                        ifblock_l =true;
                    else ifblock_r = true;
                }
                else if (abs(temp) == k + 1){
                    if (temp < 0)
                        ifhas_l = true;
                    else ifhas_r = true;
                }
                if (ifblock_l && ifblock_r)//左右都被挡了,直接跳出 
                    break;
            }
            if ((ifhas_l && !ifblock_l) || (ifhas_r && !ifblock_r))
                return i + 1;
        }
        return -1;
    }
};
