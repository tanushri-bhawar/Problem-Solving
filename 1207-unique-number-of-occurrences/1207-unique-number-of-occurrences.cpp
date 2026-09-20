class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(auto it:mp)
        {
           for(auto it1:mp)
           {
            if(it.first != it1.first && it.second == it1.second)
                return false;
           }
        }
        return true;
    }
};