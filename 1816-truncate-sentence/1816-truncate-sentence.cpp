class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans="";
        int tmp=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ') tmp++;
            if(tmp==k) return ans;
            ans+=s[i];
        }
        return ans;
    }
};