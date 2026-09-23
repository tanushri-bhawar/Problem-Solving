class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>ans;
        int arr[100]={0};
        for(int i=0;i<nums.size();i++)
        {
            arr[nums[i]]++;
            if(arr[nums[i]]==2) ans.push_back(nums[i]);
        }
        // int cnt=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(cnt==2)  return ans;
        //     if(arr[nums[i]]==2)
        //     {
        //         ans.push_back(nums[i]);
        //         cnt++;
        //     } 
        // }
        return ans;
        
    }
};