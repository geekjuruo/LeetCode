#
# @lc app=leetcode.cn id=70 lang=python3
#
# [70] 爬楼梯
#

# @lc code=start
class Solution:
    def climbStairs(self, n: int) -> int:
        dp = {}
        dp[1] = 1
        dp[2] = 2
        if n > 2:
            for i in range(3, n+1):
                dp[i] = dp[i-1] + dp[i-2]
        return dp[n]
# @lc code=end

