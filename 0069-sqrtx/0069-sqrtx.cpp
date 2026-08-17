class Solution {
public:
    int mySqrt(int x) {
        long  i=1;
        while(i*i<x)
        {
            i++;
        }
        //i--;
        if(i*i<=x)return i;
        return i-1;
        //if(i*i<x)return i;
    }
};