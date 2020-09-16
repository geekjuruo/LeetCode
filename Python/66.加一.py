#
# @lc app=leetcode.cn id=66 lang=python3
#
# [66] 加一
#

# @lc code=start
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        lenx = len(digits)
        num_raw = 0
        for i in range(0, lenx):
            num_raw += pow(10, lenx - i - 1) * digits[i]
        num_res = num_raw + 1
        res_string = str(num_res)
        res = []
        for s in res_string:
            res.append(int(s))
        return res
# @lc code=end

