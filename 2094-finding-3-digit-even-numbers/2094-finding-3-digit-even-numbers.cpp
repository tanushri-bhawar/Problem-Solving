class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int>ans;
        int hash[10]={0};

        for(int x:digits)//freq
        {
            hash[x]++;
        }

        int tmp=0;
        for(int i=1;i<=9;i++)
        {
            if(hash[i]==0)continue;
            tmp+=i*100;
            hash[i]--;

            for(int j=0;j<=9;j++)
            {
                if(hash[j]==0)continue;
                tmp=tmp+(j*10);
                hash[j]--;
                for(int k=0;k<=9;k+=2)
                {
                    if(hash[k]>0)
                    {
                        tmp+=k;
                        ans.push_back(tmp);
                        tmp-=k;
                    }
                }
                tmp-=(j*10);
                hash[j]++;
            }
            hash[i]++;
            tmp=0;
        }
        return ans;
    }
};