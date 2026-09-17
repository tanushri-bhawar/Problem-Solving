class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size()==1)return false;
        sort(nums.begin(),nums.end());
        for(int i=0,j=1;j<nums.size();i++,j++)
        {
            if(nums[i]==nums[j])
                return true;
        }
        return false;
    }
};