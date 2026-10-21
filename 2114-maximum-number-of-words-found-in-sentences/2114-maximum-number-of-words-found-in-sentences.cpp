class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=0;
        for(string s:sentences)
        {
            int len=1;
            for(char c:s)
            {
                if(c==' ')len++;
            }
            if(max<len) max=len;
        }
        return max;
    }
};