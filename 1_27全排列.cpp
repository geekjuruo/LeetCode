class Solution {
public:
    vector<vector<int> > permute(vector<int> &num) {
        if(num.size() == 0) return res;
        permuteCore(num, 0);
        return res;
    }
private:
    vector<vector<int> > res;
    void permuteCore(vector<int> &num, int start){
        if(start == num.size()){
            vector<int> v;
            for(vector<int>::iterator i = num.begin(); i < num.end(); ++i){
                v.push_back(*i);
            }
            res.push_back(v);
        }
        for(int i = start; i < num.size(); ++i){
            swap(num, start, i);
            permuteCore(num, start+1);
            swap(num, start, i);
        }
    }
    void swap(vector<int> &num, int left, int right){
        int tmp = num[left];
        num[left] = num[right];
        num[right] = tmp;
    }
};