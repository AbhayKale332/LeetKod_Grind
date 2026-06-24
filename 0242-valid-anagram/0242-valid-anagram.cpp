class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> freq;
        unordered_map<char,int> freqt;
        if(s.length() != t.length())
        {
            return false;
        }
        for(char c:s)
        {
            freq[c]++;
        }
        for(char x:t)
        {
            freqt[x]++;
        }
        for(char r:t)
        {
            if(freq[r]!=freqt[r])
            {
                return false;
            }
        }
        return true;
    }
};