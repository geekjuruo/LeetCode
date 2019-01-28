/*
给定一个非负整数数组 A，返回一个由 A 的所有偶数元素组成的数组，后面跟 A 的所有奇数元素。

你可以返回满足此条件的任何数组作为答案。

 

示例：

输入：[3,1,2,4]
输出：[2,4,3,1]
输出 [4,2,3,1]，[2,4,1,3] 和 [4,2,1,3] 也会被接受。
*/

class Solution {
    public int[] sortArrayByParity(int[] A) {
        int index = 0;
            for (int i = 0; i < A.length; i++) {
                if ((A[i] & 1) == 0) {
                    int tmp = A[i];
                    A[i] = A[index];
                    A[index++] = tmp;
                }
            }
            return A;
        
    }
}