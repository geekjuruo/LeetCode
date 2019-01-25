class Solution {
public:
    int matrixScore(vector<vector<int>>& A) {
        int row = A.size();
        int cloumn = A[0].size();
        for (int i = 0; i < row; i++)
        {
            if(A[i][0]==0)
            {
                for (int j = 0; j < cloumn; j++)
                {
                    A[i][j] = 1 - A[i][j];
                }
            }
        }
        for (int j = 0; j < cloumn; j++)
        {
            int coutZero = 0, coutOne = 0;
            for (int i = 0; i < row; i++)
            {
                if (A[i][j] == 0)
                {
                    coutZero++;
                }
                if (A[i][j] == 1)
                {
                    coutOne++;
                }
            }
            if(coutZero>coutOne)
            {
                for (int m = 0; m < row; m++)
                {
                    A[m][j] = 1 - A[m][j];
                }
            }
        }
 
        int sum = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < cloumn; j++)
            {
                sum += A[i][j] * pow(2, (cloumn - j - 1));
            }
        }
        return sum;
    }
};


