char* longestCommonPrefix(char** strs, int strsSize) {
    char* s = (char*)malloc(strlen(strs[0]) + 1);
    strcpy(s, strs[0]);
    
    for(int i=1;i<strsSize;i++)
    {
        int j=0;
        for(;strs[i][j]!='\0' ;j++)
        {
            if(s[j]==strs[i][j])
            {
                s[j]=strs[i][j];
            }
            else
                break;
        }
        s[j]='\0';
    }
    return s;
}