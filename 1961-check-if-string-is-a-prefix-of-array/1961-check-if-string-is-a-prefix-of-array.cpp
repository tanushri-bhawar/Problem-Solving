class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string current="";

        for (string word:words) 
        {

            current+=word;

            if (current==s)
                return true;

            if (current.size()>s.size())
                return false;
        }

        return false;
    }
};