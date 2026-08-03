void reverseString(char* s,int left,int right) 
{
    while (left<right) 
    {
        char temp=s[left];
        s[left]=s[right];
        s[right]=temp;
        left++;
        right--;
    }
}

char* reverseStr(char* s,int k) 
{
    int n=0;

    while (s[n]!='\0') 
    {
        n++;
    }

    for (int i=0;i<n;i+=2*k) 
    {
        int left = i;
        int right = i + k - 1;

        if (right >= n) 
        {
            right=n-1;
        }

        reverseString(s,left,right);
    }

    return s;
}