class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool flag = true;
        int row[9][10];//第一维为行序号
        int column[9][10];//第一维为列序号
        int sub[9][10]; //第一维为子块序号，定义为“(行/3)*3+列/3”
        for (int i = 0 ; i < 9; i++) {
            for(int j = 0 ; j < 10; j++) {
                row[i][j] = 0;
                column[i][j] = 0;
                sub[i][j] = 0;
            }
        }
    
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                
                if(board[i][j] != '.') {
                    int true_num = board[i][j] - '0';
                    row[i][true_num]++;
                    column[j][true_num]++;
                    sub[(i/3)*3 + j/3][true_num]++;
                }
            }
        }

        for(int i = 0; i < 9 ; i++) {
            for(int j = 0; j < 10 ; j++) {
                if(row[i][j] >= 2 || column[i][j] >= 2 || sub[i][j] >= 2) {
                    flag =  false;
                }
            }
        }
        return flag;
    }
};