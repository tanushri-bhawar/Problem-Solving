class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        // int i=0;
        // for(;i<nums1.size();i++)
        // {
        //     for(int j=0;j<nums2.size() && nums2[j]<=nums1[i] ;j++)
        //     {
        //         if(nums1[i]==nums2[j]) return nums1[i];
        //     }
        // }
        // return -1;

        int common=-1;
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]==nums2[j]) return nums1[i];
            else if(nums1[i]>nums2[j]) j++;
            else i++;
        }
        return common;
    }
};