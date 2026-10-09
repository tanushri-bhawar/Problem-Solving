class Solution {
public:
    bool checkZeroOnes(string s) {
        int one=0;
        int zero=0;
        int maxOne = 0, maxZero = 0;

        for(char c:s) 
        {
            if(c=='1') 
            {
                one++;
                zero=0;
                maxOne=max(maxOne,one);
            } 
            else 
            {
                zero++;
                one=0;
                maxZero=max(maxZero,zero);
            }
        }
        return ((maxOne > maxZero)? true:false);
    }
};