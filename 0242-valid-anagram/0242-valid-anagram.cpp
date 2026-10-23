// class Solution {
// public:
//     bool isAnagram(string s, string t) 
//     {
//         if(s.length()!=t.length())
//             return false;

//         char s1[26]={0};
//         char s2[26]={0};

//         for(char c:s)
//             s1[c-'a']++;
        
//         for(char c:t)
//             s2[c-'a']++;  

//         for(char c:s)
//         {
//             if(s1[c-'a']!=s2[c-'a'])
//                 return false;
//         }
//         return true;              
//     }
// };


class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        int s1[26] = {0};
        int s2[26] = {0};

        for (char c : s)
            s1[c - 'a']++;

        for (char c : t)
            s2[c - 'a']++;

        for (int i = 0; i < 26; i++) {
            if (s1[i] != s2[i])
                return false;
        }

        return true;
    }
};
