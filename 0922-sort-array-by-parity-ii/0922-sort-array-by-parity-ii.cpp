class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int e=0;
        int o=1;
        int s=nums.size();
        vector<int>ans(s,0);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                ans[e]=nums[i];
                e=e+2;
            } 
            if(nums[i]%2!=0)
            {
                ans[o]=nums[i];
                o=o+2;
            }
        }
        return ans;
    }
};