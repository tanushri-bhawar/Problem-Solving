class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int n=0,m=0;
        int hash1[101]={0};
        int hash2[101]={0};
        for(int i=0;i<nums1.size();i++)
        {
            hash1[nums1[i]]=1;
        }
        for(int i=0;i<nums2.size();i++)
        {
            hash2[nums2[i]]=1;
        }
        for(int i=0;i<nums1.size();i++)
        {
            if(hash2[nums1[i]]==1)
                n++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(hash1[nums2[i]]==1)
                m++;
        }

        ans.push_back(n);
        ans.push_back(m);
        return ans;


    }
};