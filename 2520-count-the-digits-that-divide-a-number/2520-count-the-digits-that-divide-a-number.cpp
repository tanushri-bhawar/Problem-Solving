class Solution {
public:
    int countDigits(int num) {
        int tmp=num;
        int n=0,cnt=0;
        while(tmp)
        {
            n=tmp%10;
            tmp=tmp/10;
            if(num%n==0)cnt++;
        }
        return cnt;
    }
};