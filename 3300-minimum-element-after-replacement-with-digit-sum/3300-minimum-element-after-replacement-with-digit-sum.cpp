class Solution {
public:
    int minElement(vector<int>& nums) {
        int ele=0;
        int min=INT_MAX;
        for(auto i: nums){
            while(i){
                ele+=i%10;
                i/=10;
            }
            if(ele<min)min=ele;
            ele=0;
        }
        return min;
    }
};