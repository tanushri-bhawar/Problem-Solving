class Solution {
public:
    bool isMatch(string s, string p) {
        int i=0,j=0;
        int st=-1,m=0;//s=to store recent * index and m for storing from where it started matching string
        while( i<s.length())
        {
            if(j<p.length() && (s[i]==p[j] || p[j]=='?') )
            {
                i++;
                j++;
            }
            else if(j<p.length() && p[j]=='*') 
            {
                st=j;
                m=i;
                j++;
            }
            else if(st!=-1)
            {
                j=st+1;
                m++;
                i=m;
            }
            else return false;
        }
        while(j<p.length() && p[j]=='*') 
        {
            j++;
        }

        return j==p.length();    

    }
};