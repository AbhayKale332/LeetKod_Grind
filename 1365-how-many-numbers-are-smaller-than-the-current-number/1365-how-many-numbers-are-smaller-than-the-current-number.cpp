class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int, int> hash;
        vector<int> temp = nums;
        vector<int> ans;

        sort(temp.begin(), temp.end());

        int i = 0;

        for (int n : temp) {
            if (!hash.count(n)) {
                hash[n] = i;
            }
            i++;
        }

        for (int j = 0; j < nums.size(); j++) {
            ans.push_back(hash[nums[j]]);
        }

        return ans;
    }
};