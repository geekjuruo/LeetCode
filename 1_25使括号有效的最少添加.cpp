class Solution {
public:
    int minAddToMakeValid(string S) 
    {
        int n=S.length();
        stack<char> tmp;
        for(int i=0;i<n;i++)
        {
            if('('==S[i])
            {
                tmp.push('(');
            }
            else
            {
                if(tmp.empty())
                {
                    tmp.push(')');
                }
                else
                {
                    if('('==tmp.top())
                    {
                        tmp.pop();
                    }
                    else
                    {
                        tmp.push(')');                       
                    }
                }
            }
        }
        return tmp.size();
    }
};