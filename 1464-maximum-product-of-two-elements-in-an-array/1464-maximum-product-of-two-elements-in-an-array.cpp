// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         sort(nums.begin(),nums.end(),greater<int>());
//         return (nums[0]-1)*(nums[1]-1);
//     }
// };
// O(n) solution : 


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1=nums[0],max2=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i] > max1)
            {
                max2 = max1;
                max1 = nums[i];
            }
            else if(nums[i] > max2)
            {
                max2 = nums[i];
            }
        }
        return (max1-1)*(max2-1);
    }
};