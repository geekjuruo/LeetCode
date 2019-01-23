/*
这道题,要想到如何通过翻转把列表最大数依次往列表底移动.

例如:[3,2,4,1]---->[?,?,?,4]

我们可以先找到数字4的位置,将数字4前进行翻转变成[4,2,3,1],接下来我们在整体翻转[1,3,2,4],这样我们把数字4移动列表底.

然后,我们[1,3,2,4]--->[?,?,3,4],还是用刚才方法,首先找到数字3,翻转数字3前面的,再翻转已经排好数字(这里指数字4)前就可以了.
*/

class Solution {
    public List<Integer> pancakeSort(int[] A) {
        List<Integer> ans = new ArrayList();
        int N = A.length;

        Integer[] B = new Integer[N];
        for (int i = 0; i < N; ++i)
            B[i] = i+1;
        Arrays.sort(B, (i, j) -> A[j-1] - A[i-1]);

        for (int i: B) {
            for (int f: ans)
                if (i <= f)
                    i = f+1 - i;
            ans.add(i);
            ans.add(N--);
        }

        return ans;
    }
}