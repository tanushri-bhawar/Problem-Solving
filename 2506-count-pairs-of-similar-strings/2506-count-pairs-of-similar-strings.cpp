class Solution {
public:

    int isSimilar(string s1,string s2)
    {
        for(char c:s1)
        {
            if(s2.find(c)==string :: npos)
                return 0;
        }

        for (char c:s2)
        {
            if (s1.find(c)==string::npos)
                return 0;
        }

        return 1;
    }
    
    int similarPairs(vector<string>& words) 
    {
        int cnt=0;
        for(int i=0;i<words.size();i++)
        {
            for(int j=i+1;j<words.size();j++)
                if(isSimilar(words[i],words[j]))
                    cnt++;
        }
        return cnt;
    }
};