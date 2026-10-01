class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans=0;
        
        for (int len=1;len<=arr.size();len+=2) 
        {
            for (int i=0;i+len<=arr.size();i++) 
            {
                int sum=0;            
                for (int j=i;j<i+len;j++) 
                {
                    sum+=arr[j];
                }
                ans+=sum;
            }
        }
        
        return ans;
    }
};