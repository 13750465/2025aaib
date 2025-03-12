class Solution:
    def coloredCells(self, n: int) -> int:
        ans=0
        for i in range(1, n*2, 2):
            ans += i
        for i in range(1, n*2-1, 2):
            ans += i
        return ans
