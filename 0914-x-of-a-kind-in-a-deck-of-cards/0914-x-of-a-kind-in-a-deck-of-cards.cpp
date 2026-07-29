class Solution {
public:

    int maxx(vector<int>& deck)
    {
        int max=INT_MIN;
        for(int i=0;i<deck.size();i++)
        {
            if(max<deck[i])max=deck[i];
        }
        if(max==INT_MIN)return 0;
        return max;
    }

    bool hasGroupsSizeX(vector<int>& deck) {
        //if(deck.size()%2 !=0)return false;
        int s=maxx(deck);
        vector<int>seen(s+1,0);
        int max=0;
    
        for(int i=0;i<deck.size();i++)
        {
            seen[deck[i]]++;
            if(seen[deck[i]]>max)max=seen[deck[i]];
        }

        int g=0;
        for(int i=0;i<seen.size();i++)
        {
            //if(seen[i]==max)continue;
            if(seen[i]!=0)
            {
                g =gcd(g,seen[i]);
            }
        }
        return g >= 2;
    }
};