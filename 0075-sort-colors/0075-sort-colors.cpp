class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int min=0;
        for(int i=0;i<nums.size();i++)
        {
            int min=i;
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[min]>nums[j]) min=j;
            }
            int tmp=nums[i];
            nums[i]=nums[min];
            nums[min]=tmp;
        }
    
    }
};