class Solution {
public:
    string interpret(string command) {
        string ans="";
        for(int i=0;i<command.size();i++)
        {
            char c=command[i];
            if((c>='A' && c<='Z')||(c>='a' && c<='z'))
            {
                ans+=c;
            }
            else if((i+1<command.size()) && (command[i]=='(' && command[i+1]==')'))
            {
                ans+='o';
            }
        }
        return ans;
    }
};