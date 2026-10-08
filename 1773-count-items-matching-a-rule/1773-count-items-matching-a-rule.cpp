class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int v=0;
        if(ruleKey=="type") v=0;
        else if(ruleKey=="color") v=1;
        else v=2;

        int cnt=0;
        for(int i=0;i<items.size();i++)
        {
            if(items[i][v]==ruleValue) cnt++;
        }
        return cnt;
    }
};