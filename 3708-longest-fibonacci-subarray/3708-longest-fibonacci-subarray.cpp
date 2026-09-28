class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int ans=2,cnt=2;

        if (n<=2) return n;

        for(int i=2;i<nums.size();i++)
        {
            if(nums[i-2]+nums[i-1]==nums[i])
                cnt++;
            else 
                cnt=2;   

            ans=max(cnt,ans);     
        }
        return ans;
        
    }
};