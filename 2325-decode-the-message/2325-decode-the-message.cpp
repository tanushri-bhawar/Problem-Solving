
class Solution {
public:
    string decodeMessage(string key, string message) {
        vector<char>mp(26);
        vector<bool>seen(26,false);

        char decoded='a';

        for(char c:key) 
        {
            if(c==' ')continue;

            if(!seen[c-'a']) 
            {
                mp[c-'a']=decoded++;
                seen[c-'a']=true;
            }
        }

        for(char &c:message) 
        {
            if(c!=' ') c=mp[c-'a'];
        }

        return message;
    }
};
