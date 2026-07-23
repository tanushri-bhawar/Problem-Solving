class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=0;int max=0;int i=0, j=0;
        while(i<nums.size())
        {
            int count=0;
            for(;i<nums.size();i++)
            {
                if(nums[i]==1)
                    count++;
                else break;
            }
            i++;
            if(count>max) max=count;
        }
        return max;
    }
};