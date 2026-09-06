class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        if(nums.size()==1)return 0;
        for(int i=0;i<nums.size();i++)
        {
            int j=0;
            int m=i;
            int max=nums[0];
            int min=nums[i];
            for(;j<=i;j++)
            {
                if(nums[j]>max) max=nums[j];
            }

            for(;m<nums.size();m++)
            {
                if(nums[m]<min) min=nums[m];
            }

            if(max-min <=k) return i;
            //if(min==max || max-min==k)return 0;
        }
        return -1;
    }
};