class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> num;
        for (int x : nums)
        {
            num.insert(x);
        }
        if(!num.count(k))
        {
            return k;
        }
        for(int i=1; ;i++)
        {
            if((k*i)%k==0 && !num.count(k*i))
            {
                return k*i;
            }
        }
        return 0;
    }
};