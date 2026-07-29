class Solution {
public:
    int rev(int num)
    {
        int revv = 0;
        while(num)
        {
            revv = revv * 10 + num % 10;
            num /= 10;
        }
        return revv;
    }

    int sumOfPrimesInRange(int n)
    {
        int sum = 0;

        int re = rev(n);

        int a = min(n, re);
        int b = max(n, re);

        while(a <= b)
        {
            if(a < 2)
            {
                a++;
                continue;
            }

            bool prime = true;

            for(int i = 2; i * i <= a; i++)
            {
                if(a % i == 0)
                {
                    prime = false;
                    break;
                }
            }

            if(prime)
                sum += a;

            a++;
        }

        return sum;
    }
};