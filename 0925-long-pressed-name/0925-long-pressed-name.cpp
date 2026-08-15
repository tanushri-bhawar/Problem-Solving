class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        string s="";
        int i=0, j=0;
        if(name[0]!=typed[0]) return false;
        for(;i<typed.length();i++)
        {

            if(typed[i]==name[j] ) 
            {
                j++;
                s=s+typed[i];
            }

            else if ((i>0 && (typed[i-1]!=typed[i] ))||s==name)
                break;

        }
        while(i<typed.length())
        {
            if(typed[i]==name[name.length()-1]) 
            {   
                i++;
                continue;
            }    
            else break;
        }

        return i==typed.length() && s==name;
    }
};