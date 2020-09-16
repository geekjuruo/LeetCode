#
# @lc app=leetcode.cn id=88 lang=python3
#
# [88] 合并两个有序数组
#

# @lc code=start
class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        if m == 0:
            nums1[:] = nums2[:]
        elif n == 0:
            nums1 = nums1
        else:
            a = 0
            while len(nums2) > 0:
                if nums1[a] <= nums2[0]: 
                    if a < m+n-len(nums2):
                        a += 1
                    else:
                        nums1[m+n-len(nums2):] = nums2[:]
                        break                    
                else:
                    n2 = nums2.pop(0)
                    nums1[a+1:m+n] = nums1[a:m+n-1]
                    nums1[a] = n2    
# @lc code=end

