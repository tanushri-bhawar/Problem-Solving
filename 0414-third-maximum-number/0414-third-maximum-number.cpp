class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        set<int>st;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            st.insert(nums[i]);
        }

        if(st.size()>=3)
        {
            auto it=next(st.rbegin(),2);
            return *it;
        }   
        auto it= next(st.rbegin(),0);
        return *it;
    }
};