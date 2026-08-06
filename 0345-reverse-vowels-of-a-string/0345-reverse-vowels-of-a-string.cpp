class Solution {
public:

    int isVowel(char c)
    {
        if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
        {
            return 1;
        }
        return 0;
    }
    string reverseVowels(string s) {
        int j=s.length()-1,i=0;
        while(i<j)
        {
            if(!isVowel(s[i]))i++;
            if(!isVowel(s[j]))j--;

            if(isVowel(s[i]) && isVowel(s[j]))
            {
                char tmp=s[i];
                s[i]=s[j];
                s[j]=tmp;
                i++;
                j--;
            }
        }
        return s;
    }
};