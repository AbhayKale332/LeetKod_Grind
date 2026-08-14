class Solution {
public:
    int maximumLengthSubstring(string s) {
        int res=0;
        int l=0;
        unordered_map<char,int> freq;
        for(int r=0;r<s.length();r++)
        {
            freq[s[r]]++;
            while(freq[s[r]]>2)
            {
                freq[s[l]]--;
                l++;
            }
            res = max(res,r - l+1);
        }
        return res;
    }
};