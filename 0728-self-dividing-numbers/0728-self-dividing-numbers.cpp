class Solution {
public:
    int isSelfDriving(int num)
    {
        int tmp=num,n=0;
        while(tmp)
        {
            n=tmp%10;
            tmp=tmp/10;
            if(n==0 || num%n!=0)return 0;
        }
        return 1;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++)
        {
            if(isSelfDriving(i)) ans.push_back(i);
        }

        return ans;
    }
};