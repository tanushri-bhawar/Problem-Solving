class Solution {
public:
    bool checkOnesSegment(string s) {
        bool zero=false;

        for(char c:s)
        {
            if(c=='0')
                zero=true;
            else if(zero&&c=='1')
                return false;
        }
        return true;
    }
};