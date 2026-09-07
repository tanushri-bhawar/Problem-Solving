class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) 
    {
        map<int, int> mp;

        for (int x : nums) 
        {
            mp[x]++;
        }

        vector<int> ans;

        while (!mp.empty()) 
        {
            int minFreq = INT_MAX;
            int value = 0;

            //smallest frequency
            for (auto x : mp) 
            {
                if (x.second < minFreq||(x.second == minFreq && x.first >value)) 
                {
                    minFreq = x.second;
                    value = x.first;
                }
            }

            // Add frequency times
            for (int i = 0; i < minFreq; i++) 
            {
                ans.push_back(value);
            }

            // Remove it from map
            mp.erase(value);
        }

        return ans;
    }
};