class Solution {
public:
    vector<string> commonChars(vector<string>& words) 
    {
        vector<string>ans;

        int arr[26]={0};

        for(char c:words[0])
            arr[c-'a']++;

        for(int i=1;i<words.size();i++)
        {
            int freq[26]={0};

            for(char c:words[i])
                freq[c-'a']++;

            for(int j=0;j<26;j++)
                arr[j]=min(arr[j],freq[j]);
        }

        for(int i=0;i<26;i++)
        {
            while(arr[i]>0)
            {
                ans.push_back(string(1,'a'+i));
                arr[i]--;
            }
        }

        return ans;
    }
};