class Solution {
public:

    // int maxx(map<int,int>&mp)
    // {
    //     //int key=0;
    //     auto max=mp.begin()->first;
    //     for(auto x:mp)
    //     {
    //         if(mp[max]<x.second)max=x.first;
    //     }
    //     mp[max]=0;
    //     return max;
    // }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());//sorted element
        map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++; //frequency
        }
        
        //1st way
        // while(k>0)
        // {
        //     int max=maxx(mp);
        //     ans.push_back(max);
        //     k--;
        // }


        //2nd way
        priority_queue<pair<int, int>> pq;
        for(auto it : mp)
        {
            pq.push({it.second, it.first});
        }
        
        while(k>0)
        {
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }

        return ans;
    }
};