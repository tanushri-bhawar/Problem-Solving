bool isPal(char *s,int l,int r)
{
    while(l<r)
    {
        if(s[l]!=s[r]) return false;
        
        l++;
        r--;
    }
    return true;
}

bool validPalindrome(char* s)
{
    int n=strlen(s);
    int i=0,j=n-1;

    while(i<j)
    {
        if(s[i]==s[j])
        {
            i++;
            j--;
        }
        else
        {
            return isPal(s,i+1,j)||isPal(s,i,j-1);
        }
    }

    return true;
}