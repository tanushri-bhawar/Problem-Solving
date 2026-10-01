class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int l=nums.size();
        int sum=0;
        for(int i=0;i<l;i++)
        {
            if(l%(i+1)==0)sum+=nums[i]*nums[i];
        }
        return sum;
    }
};