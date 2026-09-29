class Solution {
public:
    int sum(int x) 
    {
        int s=0;
        while (x>0)
        {
            s+=x%10;
            x/=10;
        }

        return (s%2==0)?1:0;
    }
    int countEven(int num) {
        int i=1;
        int cnt=0;
        for(int i=1;i<=num;i++)
        {
            if(sum(i)) cnt++;
        }
        return cnt;
    }
};