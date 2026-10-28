
class Solution {
public:

    int isAna(string a, string b)
    {
        if(a.size()!=b.size()) return 0;

        char c1[27]={0};
        //char c2[27]={0};
        int i=0;

        while(i<a.size())
        {
            c1[a[i]-'a']++;
            c1[b[i]-'a']--;
            i++;
        }

    
        i=0;
        while(i<26)
        {
            if(c1[i]!=0)
                return 0;
            i++;
        }

        return 1;
    }

    vector<string> removeAnagrams(vector<string>& words) {
        if(words.size()==1) return words;

        for(int i=1;i<words.size();)
        {
            if(isAna(words[i],words[i-1]))
                words.erase(words.begin()+i);
            else
                i++;
        }

        return words;
    }
};
