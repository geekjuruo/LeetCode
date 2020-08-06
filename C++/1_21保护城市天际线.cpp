class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int len = grid[0].size();
        int x[len][len][2];//0为行，1为列
        //求行最大值
        for(int i = 0; i < len ; i++) {
            int row_max = 0;
            for(int j = 0; j < len; j++) {
                if(grid[i][j] > row_max) {
                    row_max = grid[i][j];
                }
            } 
            for(int j = 0; j < len; j++) {
                x[i][j][0] = row_max;
            } 
            row_max = 0;
        }
        //求列最大值
        for(int i = 0; i < len ; i++) {
            int col_max = 0;
            for(int j = 0; j < len; j++) {
                if(grid[j][i] > col_max) {
                    col_max = grid[j][i];
                }
            } 
            for(int j = 0; j < len; j++) {
                x[j][i][1] = col_max;
            } 
            col_max = 0;
        }
        int result = 0;
        for(int i = 0 ; i < len ; i++) {
            for(int j = 0; j < len ; j++) {
                if(x[i][j][0] < x[i][j][1]) {
                    result = result + x[i][j][0] - grid[i][j];
                } else {
                    result = result + x[i][j][1] - grid[i][j];
                }
            }
        }
        return result;
    }
};