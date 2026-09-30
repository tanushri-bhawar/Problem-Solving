class Solution {
public:
    int scoreOfString(string s) {
        //if(s.length()==2) return s[1]-s[0];
        int sum=0;
        for(int i=0;(i+1)<s.length();i++)
        {
            sum+=abs(s[i]-s[i+1]);
        }
        return sum;
    }
};