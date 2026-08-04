int countBinarySubstrings(char *s)
{
    int pr=0;
    int curr=1;
    int ans=0;

    for(int i=1;s[i]!='\0';i++)
    {
        if(s[i]==s[i-1])
        {
            curr++;
        }
        else
        {
            ans+=(pr<curr)?pr:curr;
            pr=curr;
            curr=1;
        }
    }

    ans+=(pr<curr)?pr:curr;

    return ans;
}