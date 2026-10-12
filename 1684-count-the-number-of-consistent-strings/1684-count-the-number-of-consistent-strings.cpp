class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt=0;
        int flag=0;
        for(string w: words)
        {
            flag=1;
            for(char ch:w)
            {
                if(allowed.find(ch)==string::npos) // if character not found
                {
                    flag=0;
                    break;
                }
            }
            if (flag!=0) cnt++;
        }
        return cnt;
    }
};