class Solution {
public:
    string countAndSay(int n) {
        string a="1",temp="";
        for(int i=1;i<n;i++)
        {
            int t=0;
            while(t<a.size())
            {
                int value=1;
                while(a[t]==a[t+1])//&&t+1<a.size()
                {
                    value++;
                    t++;
                }
                temp=temp+to_string(value)+a[t];//char可以直接，不用to_string
                t++;
            }
            a=temp;
            temp="";
        }
        return a;
    }
};