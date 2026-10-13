class Solution {
public:
    string removeOuterParentheses(string s) {
        vector<int>arr;
        int i=0;
        for(char c:s)
        {
            if(c=='(') 
            {
                if(i>0) arr.push_back(c);
                i++;
            } 
            else 
            {
                i--;
                if(i>0) arr.push_back(c);
            }
        }


        string a="";
        for(char c:arr) a=a+c;
        return a;
    }
};