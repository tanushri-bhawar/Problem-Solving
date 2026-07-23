class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int pos=n;
        for(int i=1;i<(2*n);i+=2)
        {
            int tmp=nums[pos];
            nums.erase(nums.begin()+pos);
            nums.insert(nums.begin()+i,tmp);
            pos++;
        }
        return nums;
    }
};