class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        vector<int>ans(2);
        ans[0]=-1;
        ans[1]=-1;

        int hash[101]={0};
        sort(nums.begin(),nums.end());
        int first=nums[0];

        for(int x:nums)
        {
            hash[x]++;
        }
        
        for(int i=first+1;i<101;i++)
        {
            if(hash[i]!=0 && hash[first]!=hash[i])
            {
                ans[0]=first;
                ans[1]=i;
                return ans;
            }
        }
        return ans;
    }
};