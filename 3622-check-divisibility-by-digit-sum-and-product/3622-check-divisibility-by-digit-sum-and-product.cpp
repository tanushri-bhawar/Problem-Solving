class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int mul=1;
        int tmp=n;
        while(n)
        {
            int digit=n%10;
            sum+=digit;
            mul*=digit;
            n/=10;
        }
        
        return tmp%(sum+mul)==0;    
    }
};