class Solution {
public:
    int digitFrequencyScore(int n) {
        int hash[10]={0};
        
        while(n)
        {
            int idx=n%10;
            hash[idx]=hash[idx]+1;
            n=n/10;
        }

        int ans=0;
        for(int i=0;i<10;i++)
        {
            ans=ans+(i*hash[i]);
        }
        return ans;

    }
};