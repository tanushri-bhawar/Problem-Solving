class Solution {
public:
    int isChar(char c)
    {
        if((c>=65&& c<=90 )||(c>=97 && c<=122))
            return 1;
        return 0;
        
    }
    string reverseOnlyLetters(string s) {
        int i=0;
        int j=s.length()-1;

        while(i<j)
        {
            if(isChar(s[i]) && isChar(s[j]))
            {
                char tmp=s[i];
                s[i]=s[j];
                s[j]=tmp;
                i++;
                j--;
            }
            else if(!isChar(s[i])) i++;
            else if(!isChar(s[j])) j--;
        }
        return s;
    }
};