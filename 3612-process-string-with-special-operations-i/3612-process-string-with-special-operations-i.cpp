class Solution {
public:
    string processStr(string s) {
        int n=s.length();
        string result="";
        int rlen=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='*')
            {
                if(rlen!=0)
                {
                    result.pop_back();
                    rlen--;
                }
            }
            else if(s[i]=='#')
            {
                string temp = result;
                result += temp;
                rlen *=2;
            }
            else if(s[i]=='%')
            {
                reverse(result.begin(),result.end());
            }
            else{
                result += s[i];
                rlen++;
            }
        }
        return result;
    }
};