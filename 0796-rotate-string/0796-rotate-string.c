bool rotateString(char* s, char* goal) 
{
    int n = strlen(s);

    if (n != strlen(goal))
        return false;

    for (int start = 0; start < n; start++) 
    {

        if (s[start] != goal[0])
            continue;

        int i = start;
        int j = 0;

        while (j < n && s[i] == goal[j]) 
        {
            i++;
            j++;

            if (i == n)
                i = 0;
        }

        if (j == n)
            return true;
    }

    return false;
}