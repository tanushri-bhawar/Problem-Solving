class Solution {
public:
    string convertToBase7(int num) {
        if(num==0)return "0";
        string ans="";
        int n=num;
        int tmp=0;
        if(num<0)num=(-1)*num;
        while(num)
        {
            tmp=num%7;
            num=num/7;
            ans+=('0'+tmp);
        }
        reverse(ans.begin(),ans.end());
        if(n<0)
        {
            return '-'+ans;
        }    
        return ans;
    }
};