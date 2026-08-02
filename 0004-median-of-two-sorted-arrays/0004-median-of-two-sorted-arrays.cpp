class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        for (int i = 0; i < nums2.size(); i++) {
            nums1.push_back(nums2[i]);
        }

        sort(nums1.begin(), nums1.end());

        int n = nums1.size();
        int k = n / 2;

        if (n % 2 == 1)
            return nums1[k];
        else
            return (nums1[k - 1] + nums1[k]) / 2.0;
    }
};