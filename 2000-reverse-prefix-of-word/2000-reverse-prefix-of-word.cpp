class Solution {
public:
    string reversePrefix(string word, char ch) {
        string s="";
        int i=0;
        for(;i<word.length();i++)
        {
            if(word[i]==ch)
            {
                s+=word[i];
                break;
            }
            s+=word[i];
        }
        if(i==word.length())return word;
        for(int j=s.length()-1,k=0;;j--,k++)
        {
            if(word[k]==ch)
            {
                word[k]=s[j];
                break;
            }
            word[k]=s[j];
        }
        return word;

    }
};