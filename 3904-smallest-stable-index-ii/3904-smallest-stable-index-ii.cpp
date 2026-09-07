class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>min(n);
        vector<int>max(n);
        max[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            if(max[i-1]>nums[i])max[i]=max[i-1];
            else max[i]=nums[i];
        }
        min[n-1]=nums[n-1];
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]>min[i+1])min[i]=min[i+1];
            else min[i]=nums[i];

        }
        for(int i=0;i<n;i++)
        {
            if(max[i]-min[i]<=k)return i;
        }
        
        return -1;
    }
};