class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> n;
        vector<int> res;
        int siz=nums.size()+1;
        for (int num : nums)
        {
            n.insert(num);
        }
        for(int i=1;i<siz;i++)
        {
            if(!n.count(i))
            {
                res.push_back(i);
            }
        }
        return res;
    }
};