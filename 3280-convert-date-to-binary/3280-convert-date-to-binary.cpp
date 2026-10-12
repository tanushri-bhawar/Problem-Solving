class Solution {
public:
    string to_binary(int s)
    {
        string ans="";
        while(s>0)
        {
            int p=s%2;
            ans+=p+'0';
            s=s/2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }

    string convertDateToBinary(string date) 
    {

        string dd=date.substr(8,2);
        string mm=date.substr(5,2);
        string yy=date.substr(0,4);
        
        return to_binary(stoi(yy))+"-"+to_binary(stoi(mm))+"-"+to_binary(stoi(dd));
    }
};
