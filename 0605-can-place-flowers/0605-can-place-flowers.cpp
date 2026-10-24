
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int before=0;
        int after=0;
        if(n==0)return true;

        for(int i=0;i<flowerbed.size();i++)
        {
            if(n==0)return true;

            before=0;
            after=0;

            if(i==0 || flowerbed[i-1]==0)
                before=1;

            if(i==flowerbed.size()-1 || flowerbed[i+1]==0)
                after=1;

            if(flowerbed[i]==0 && before==1 && after==1)
            {
                flowerbed[i]=1;
                n--;
            }
        }

        return((n==0)?1:0);
    }
};
