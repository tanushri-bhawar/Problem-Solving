class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        unordered_map<int,int>f;
        unordered_map<int,int>l;
        unordered_map<int,int>freq;

        if(nums.size()==1)return 1;
        
        //int maxx=INT_MIN;
        int num=nums[0];
        int degree=0;
        for(int i=0;i<nums.size();i++)
        {
            int x=nums[i];
            freq[x]++;
            if(!f.count(x))
            {
                f[x]=i;
            }     
            l[x]=i;
            degree=max(freq[x],degree);
        }
        
        int min=INT_MAX,gap=0;
        for(auto x:f)
        {
            if(freq[x.first]==degree)
            {
                gap=l[x.first]-f[x.first]+1;
                if(gap<min)
                    min=gap;
            }
        }
        return min;
    }
};