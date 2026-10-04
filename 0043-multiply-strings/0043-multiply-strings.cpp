class Solution {
public:
    // int to_int(string s)
    // {
    //     int tmp=0;
    //     for(int i=0;i<s.length();i++)
    //         tmp=tmp*10+(s[i]-'0');

    //     return tmp;    
    // }
    // string multiply(string num1, string num2) {
    //     int n1=to_int(num1);
    //     int n2=to_int(num2);
        
    //     return to_string(n1*n2); 
    // }

    string multiply(string num1, string num2) 
    {
        if(num1=="0"||num2=="0")
            return "0";

        int n=num1.size();
        int m=num2.size();

        vector<int>ans(n+m,0);

        for(int i=n-1;i>=0;i--) 
        {
            for(int j=m-1;j>=0;j--) 
            {
                int x =num1[i]-'0';
                int y =num2[j]-'0';

                ans[i+j+1]+=x*y;

                ans[i+j]+=ans[i+j+1]/10;
                ans[i+j+1]%=10;
            }
        }

        string res="";

        for(int x:ans) 
        {
            if(res.empty() && x==0)
                continue;

            res+=char(x+'0');
        }

        return res;
    }

};