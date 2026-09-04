class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minn=0;
        int maxx=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[minn]>nums[i]) minn=i;
            if(nums[maxx]<nums[i]) maxx=i;
        }
        int l=min(minn,maxx);
        int r=max(minn,maxx);

        int o1=r+1;
        int o2=nums.size()-l;
        int o3=l+1+(nums.size()-r);

        int minnn=min(o1,o2);
        return min(minnn,o3);
    }
};