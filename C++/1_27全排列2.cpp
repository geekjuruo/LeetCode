class Solution {
public:
    vector<vector<int> > permuteUnique(vector<int> &num) {
        if(num.size() <= 0) return res;
        sort(num.begin(), num.end());
        res.push_back(num);
        int i = 0, j = 0;
        while(1){
            //Calculate next permutation
            for(i = num.size()-2; i >= 0 && num[i] >= num[i+1]; --i);
            if(i < 0) break;
            for(j = num.size()-1; j > i && num[j] <= num[i]; --j);
            swap(num, i, j);
            j = num.size()-1;
            ++i;
            while(i < j)
                swap(num, i++, j--);
            //push next permutation
            res.push_back(num);
        }
        return res;
    }
private:
    vector<vector<int> > res;
    void swap(vector<int> &num, int left, int right){
        int tmp = num[left];
        num[left] = num[right];
        num[right] = tmp;
    }
};