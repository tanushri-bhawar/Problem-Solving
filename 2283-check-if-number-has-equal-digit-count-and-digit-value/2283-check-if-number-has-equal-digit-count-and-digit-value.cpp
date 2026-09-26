class Solution {
public:
    bool digitCount(string num) {
        for(int i=0;i<num.length();i++)
        {
            int cnt=0;
            for(char c:num)
            {
                if(c==i+'0') cnt++;
            }
            if(cnt!=num[i]-'0') return false;
        }
        return true;
    }
};