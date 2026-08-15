class Solution:
    def longestSubsequence(self, nums: List[int]) -> int:
        xor = 0
        any_not_0 = False
        n = len(nums)

        for x in nums:
            if not any_not_0 and x:
                any_not_0 = True
            xor ^= x

        if xor:
            return n

        return n - 1 if any_not_0 else 0
