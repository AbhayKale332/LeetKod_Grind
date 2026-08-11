class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0];
        int n=nums[0];
        unordered_set<int> mySet(std::begin(nums), std::end(nums));
        cout << nums.size();
        for(int i=1;i<nums.size()&&nums[i]==n+1;i++)
        {
            sum += nums[i];
            n++;
        }
        while (mySet.count(sum))
        {
            sum++;
        }
        return sum;
    }
};