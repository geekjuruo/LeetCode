#
# @lc app=leetcode.cn id=58 lang=python3
#
# [58] 最后一个单词的长度
#

# @lc code=start
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        lens = len(s)
        if lens == 0:
            return 0
        else:
            space_num = 0
            for i in range(0 , lens):
                if s[i] == ' ':
                    space_num += 1
            if space_num == lens:
                return 0
        for i in range(0, lens):
            if s[lens-i-1] == ' ':
                continue
            else:
                res = 0
                for j in range(i, lens):
                    if s[lens - j - 1] != ' ':
                        res += 1
                    else:
                        break
                return res
# @lc code=end

