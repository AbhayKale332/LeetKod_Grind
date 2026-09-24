class Solution:
    def smallestIndex(self, nums: List[int]) -> int:
        for n,num in enumerate(nums):
            digit_sum=0
            while num > 0:
                digit_sum += num % 10
                num //= 10
            if(digit_sum == n):
                return digit_sum
        return -1
                        