class Solution {
public:
    string toLowerCase(string s) {
        int diff='a'-'A';
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                s[i]=s[i]+diff;
        }
        return s;
    }
};