//brute Force
//O(m*n log n)
// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         unordered_map<string,vector<string>> ans;
//         for(auto &s:strs)
//         {
//             string key = s;
//             sort(key.begin(),key.end());
//             ans[key].push_back(s);
//         }
//         vector<vector<string>> result;
//         for(auto &n:ans)
//         {
//             result.push_back(n.second);
//         }
//     return result;
//     }
// };



class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ans;
        for(string &s:strs)
        {
            int arr[26]={0};
        for(char c:s)
        {
            arr[c - 'a']++;
        }
        
        string key="";
        for(int i=0;i<26;++i)
        {
            key += to_string(arr[i])+","; //convert INT to STR
        }
        ans[key].push_back(s);
        }
        vector<vector<string>> result;

        for(auto &x:ans)
        {
            result.push_back(x.second);
        }
        return result;
    }
};