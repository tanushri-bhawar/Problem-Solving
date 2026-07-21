bool isP(int n)
{
    int sum=0,tmp=n;
    while(n)
    {
        int a=n%10;
        sum=sum*10+a;
        n=n/10;
    }
    if(sum==tmp)return true;
    else return false;
}

bool isPrime(int n)
{
    //int p=0;
    if(n<2) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;

}
int primePalindrome(int n) {
    if (n >= 8 && n <= 11)
            return 11;

    while(1)
    {
        if (n>9999999 && n<100000000)
                n = 100000000;

        if (isPrime(n) && isP(n))
            return n;
        n++;
    }
}