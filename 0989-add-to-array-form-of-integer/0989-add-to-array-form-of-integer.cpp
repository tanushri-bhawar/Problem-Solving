class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>ans;
        int carry=0;
        int i=num.size()-1;
        for(;i>=0;i--)
        {
            if(k==0)
            {
                break;
            }
            int tmp=(k%10)+num[i]+carry;
            carry=tmp/10;
            ans.push_back(tmp%10);
            k=k/10;
        }
        while(i>=0)
        {
            int tmp=num[i]+carry;
            ans.push_back(tmp%10);
            carry=tmp/10;
            i--;
        }
        while(k>0) 
        {
            int tmp=(k%10)+carry;

            ans.push_back(tmp%10);
            carry=tmp/10;

            k/=10;
        }

        if(carry) ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};