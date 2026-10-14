class Solution {
public:
    int hammingDistance(int x, int y) {
        int cnt=0,a=0,b=0;
        while(x>0 || y>0)
        {
            a=x%2;
            b=y%2;
            if(a!=b) cnt++;
            x/=2;
            y/=2;
        }
        return cnt;
    }
};