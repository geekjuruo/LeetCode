class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int s = 0;
        int e = n - 1;
        int num = 1;
        vector<vector<int> > res(n, vector<int>(n, 0)); // 必须初始化
        while(s < e) {
            for(int j = s; j <= e; j++) res[s][j] = num++;
            for(int i = s + 1; i <= e; i++) res[i][e] = num++;
            for(int j = e - 1; j >= s; j--) res[e][j] = num++;
            for(int i = e - 1; i > s; i--) res[i][s] = num++;
            ++s;
            --e;
        }
        if(s == e) res[s][s] = num;
        return res;
    }
};