class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> seen;
        for(int n : nums)
        {
            seen[n]++;
            if(seen[n]>1)
            {
                return true;
            }
        }
        return false;
    }
};