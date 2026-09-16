class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        vector<int>ans;
        int sum=0;
        for(int i=0,j=numbers.size()-1;i<j;)
        {
            // sum=numbers[i];
            
            // for(int j=i+1;j<numbers.size();j++)
            // {
            //     if(numbers[j]==target-sum)
            //     {
            //         ans.push_back(i+1);
            //         ans.push_back(j+1);
            //         return ans;
            //     }
            // }
            if(numbers[i]+numbers[j]==target)
            {
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            else if(numbers[i]+numbers[j]>target) j--;
            else if(numbers[i]+numbers[j]<target) i++;

        }
        return ans;
    }
};