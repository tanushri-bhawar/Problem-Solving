class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num==0)return true;
        int tmp=num;
        if(tmp%10==0)return false;
        int num2=0;
        while(num)
        {
            int i=num%10;
            num2=(num2*10)+i;
            num=num/10;
        }
        if(num2%10==0)return false;
        return true;
    }
};