class Solution {
public:

    static bool compare(string a,string b)
    {
        return a+b > b+a;
    }
    string largestNumber(vector<int>& nums) {
        vector<string>s;
        for(int n:nums)
            s.push_back(to_string(n));


        sort(s.begin(),s.end(),compare);  
        //here compare() is called or we can say sorting is done one the the basis of whatever it returns:
        //1.if true is return then it means put a b4 b
        //2.if false is return then put b b4 a

        if(s[0]=="0")return "0";
        string ans="";

        for(string ss:s)
        {
            ans+=ss;
        }

        return ans;
    }
};