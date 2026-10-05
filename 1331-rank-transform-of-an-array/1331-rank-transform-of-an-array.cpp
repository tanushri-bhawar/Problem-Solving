class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.empty()) return{};
        vector<int>tmp;
        for(int x:arr)tmp.push_back(x);
        sort(tmp.begin(),tmp.end());

        unordered_map<int,int>mp;
        int r=1;
        mp[tmp[0]]=r;
        for(int i=1;i<tmp.size();i++)
        {
            if(tmp[i]!=tmp[i-1]) r++;
            mp[tmp[i]]=r;
        }

        vector<int>ans;
        for(int i=0;i<arr.size();i++)
        {
            ans.push_back(mp[arr[i]]);
        }
        return ans;
    }
};