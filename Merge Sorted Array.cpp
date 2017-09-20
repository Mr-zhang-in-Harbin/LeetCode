class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int target = m + n - 1;
        m--,n--;
        while (n >= 0)
        {
            if (nums1[m] > nums2[n] && m >= 0)
                nums1[target--] = nums1[m--];
            else nums1[target--] = nums2[n--];
        }
    }
};
