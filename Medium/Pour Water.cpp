class Solution {
public:
    vector<int> pourWater(vector<int>& heights, int V, int K) {
        int n = heights.size();
        while(V--)
        {
            int left=K;
            while (heights[left - 1] <= heights[left] && left >0)
                left--;
            while (heights[left] == heights[left + 1] && left <= K)
                left++;
            if (left < K)
                heights[left]++;
            else {
                int right = K;
                while (heights[right + 1] <= heights[right] && right < n - 1)
                    right++;
                while (heights[right] == heights[right - 1] && right >= K)
                    right--;
                if (right > K)
                    heights[right]++;
                else heights[K]++;
            }
        }
        return heights;
    }
};