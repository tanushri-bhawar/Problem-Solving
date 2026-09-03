class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<char>c;
        for(int i=0;i<s.length();i++)
        {
            c.push_back(s[i]);
        }

        for(int i=0;i<t.length();i++)
        {
            int j=0;
            for(;j<c.size();j++)
            {
                if(c[j]==t[i])
                {
                    c[j]=' ';
                    break;
                }
                   
            }
            if(j==c.size())
                return t[i];
        }
        return ' ';
    }
};