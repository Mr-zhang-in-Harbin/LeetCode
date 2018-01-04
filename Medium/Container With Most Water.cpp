class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int Max = 0;
        int i = 0,j = n-1;
        while (i < j) {
            int h = min(height[i],height[j]);
            Max = max(Max,h * (j - i));
            while (height[i] <= h && i < j) i++;
            while (height[j] <= h && i < j) j--;
        }
        return Max;
    }
};