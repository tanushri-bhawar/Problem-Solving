
class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) 
    {
        char avl_char[26]={0};
        int n='a'-'A';
        int avl=0;
        string ans="";

        for(char c:licensePlate)
        {
            if((c>='a' && c<='z')||(c>='A' && c<='Z'))
            {
                if(c>='A' && c<='Z')
                    c=c+n;

                avl_char[c-'a']++;
                avl++;
            }    
        }
        
        for(string s:words)
        {
            char avll_char[26]={0};

            for(char c:s)
            {
                if(c>='a' && c<='z')
                    avll_char[c-'a']++;
                else if(c>='A' && c<='Z')
                    avll_char[c-'A']++;
            }

            bool flag=true;

            for(int i=0;i<26;i++)
            {
                if(avll_char[i]<avl_char[i])
                {
                    flag=false;
                    break;
                }
            }

            if(flag && (ans=="" || s.size()<ans.size()))
                ans=s;
        }

        return ans;
    }
};
