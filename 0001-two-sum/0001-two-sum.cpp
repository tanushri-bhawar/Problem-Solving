class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sum;int flag=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {

                if(nums[i]+nums[j]==target)
                {
                    sum.push_back(i);
                    sum.push_back(j);
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
            
        }
        return sum;
    }
};