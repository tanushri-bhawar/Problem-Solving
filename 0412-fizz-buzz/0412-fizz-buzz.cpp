class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>s;
        int flag=0;
        for(int i=1;i<=n;i++)
        {
            flag=0;
            if(i%3==0)
            {
                //s.push_back("Fizz");
                flag=1;
            }
            if(i%5==0)
            {
                if(flag==1)
                {
                    s.push_back("FizzBuzz");
                    flag=3;
                }
                    
                else 
                {
                     s.push_back("Buzz");
                     flag=2;
                }
                   
            }
            if(flag==1)
                s.push_back("Fizz");
                
            if(i%3 !=0 && i%5!=0)
            {
                s.push_back(to_string(i));
            }    
        }
        return s;
    }
};