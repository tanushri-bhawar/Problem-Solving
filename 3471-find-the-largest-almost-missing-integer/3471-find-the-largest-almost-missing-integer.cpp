class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        vector<int> arr(51,0);
        for(int i=0;i<nums.size();i++){
            arr[nums[i]]++;
        }
        if(k==1){
           for(int i = 50; i >= 0; --i) 
           {
                if(arr[i] == 1)return i;
           }
           return -1;
        }
        
        if(k==nums.size()){
           for (int i = 50; i >= 0; i--) {
                if (arr[i] > 0)
                    return i;
            }
            return -1;
        }

       int first = -1;
        int last = -1;

        if (arr[nums[0]] == 1)
            first = nums[0];

        if (arr[nums[nums.size() - 1]] == 1)
            last = nums[nums.size() - 1];

        return max(first, last);
 
    }
};