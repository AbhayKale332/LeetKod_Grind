class Solution:
    def reverseDegree(self, s: str) -> int:
        ans=0
        for n,c in enumerate(s):
            ans += (26-(ord(c)-97)) * (n+1)

        return ans
