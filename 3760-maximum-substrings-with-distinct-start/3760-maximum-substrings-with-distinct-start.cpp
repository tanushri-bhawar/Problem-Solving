class Solution {
public:
    int maxDistinct(string s) {
        int arr[123]={0};
        int ans=0;
        for(auto i:s)
        {
            arr[i]++;
            if(arr[i]==1)ans++;
        }
       
        return ans;
    }
};