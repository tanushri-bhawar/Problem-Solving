class Solution {
public:

    int isVowel(char c)
    {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            return 1;
        return 0;    
    }
    int maxFreqSum(string s) {
        int arr[26]={0};
        for(int i=0;i<s.length();i++)
        {
            arr[s[i]-'a']++;
        }

        int maxC=0;
        int maxV=0;
        for(int i=0;i<26;i++)
        {
            if(isVowel(i+'a') && maxV < arr[i])
                maxV=arr[i];

            else if(!isVowel(i+'a') && maxC<arr[i]) maxC=arr[i];    
        }
        return maxC+maxV;
    }
};