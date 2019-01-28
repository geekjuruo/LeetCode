class Solution {
    public int repeatedNTimes(int[] A) {
        Arrays.sort(A);
        return A[A.length/2]==A[A.length-1]?A[A.length/2]:A[A.length/2-1];
    }
}