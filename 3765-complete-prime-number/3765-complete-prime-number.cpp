class Solution {
public:

    bool isPrime(int n)
    {
        if(n <= 1) return false;

        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0) return false;
        }

        return true;
    }

    bool prefix(int num)
    {
        while(num)
        {
            if(!isPrime(num))
                return false;

            num/=10;
        }

        return true;
    }

    bool suffix(int num)
    {
        int div=10;

        while(div<=num*10)
        {
            if(!isPrime(num%(div)))
                return false;

            div*=10;
        }

        return true;
    }

    bool completePrime(int num)
    {
        return isPrime(num) && prefix(num) && suffix(num);
    }
};