class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int row = A.size();
        int col = A[0].size();
        vector<vector<int>> B(col, vector<int>(row));
        for(int r = 0 ; r < row; r++) {
            for(int c = 0; c < col; c++) {
                B[c][r] = A[r][c];
            }
        }
        return B;
    }
};