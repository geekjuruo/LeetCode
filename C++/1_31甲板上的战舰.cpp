class Solution {
   public int countBattleships(char[][] board) {
    int count = 0;             //计算战舰的个数
    for (int i = 0; i < board.length; i++) {
        for (int j = 0; j < board[0].length; j++) {
            if (board[i][j] == '.')     //遇到点继续循环，跳出[i][j]点，继续向后遍历
                continue;
     if (i > 0 && board[i - 1][j] == 'X')  //当遍历的点为x时候，要与前面的点进行比较     
                continue;
            if (j > 0 && board[i][j - 1] == 'X')   
                continue;
            count++;
        }
     }
       return count;
   }
}
