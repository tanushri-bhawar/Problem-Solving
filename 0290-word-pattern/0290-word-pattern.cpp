class Solution {
public:
    bool wordPattern(string pattern, string s) {
        //list<char,string>patt;
        stringstream ss(s);
        string word;
        string arr[26];
        map<string, char> used;

        for(int i=0;i<pattern.length();i++)
        {
            //ss>>word;
            if (!(ss>>word)) return false;

            int index = pattern[i]-'a';

            if (arr[index]!="" && arr[index]!=word) return false;

            if (used.count(word) && used[word]!=pattern[i]) return false;
            
            arr[index] = word;
            used[word] = pattern[i];
            
        }
        if (ss >> word) 
            return false; 
        return true;

    }
};