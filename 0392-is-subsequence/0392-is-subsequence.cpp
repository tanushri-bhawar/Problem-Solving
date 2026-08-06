class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0,tmp=0;
        while(i<s.length() && j<t.length())
        {
            j=tmp;
            while(j<t.length())
            {
                if(s[i]==t[j])break;
                j++;
            }
            if(s[i]==t[j])
            {
                i++;
                j++;
            }
            tmp=j;
        }
        if(i==s.length())return 1;
        else return 0;
    }
};