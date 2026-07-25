class Solution {
public:
    int reverse(int x) 
    {
        signed long int rev=0;
        int n=0;
        int i=1;
        while(x!=0)
     
       {   n=x%10;
           rev=(rev*10+n);
           x=x/10;
           i++; 
       }
       if (rev>INT_MIN && rev<INT_MAX){
       return rev;
       }
       else{
        return 0;
    }
    }
};