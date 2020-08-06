//深度优先搜索
//按照子集合的长度来搜索
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       int size = nums.size();
        int n = (1<<size);
        vector<vector<int>> vect;
        for(int i=0;i<n;i++)
        {
            vector<int> tmpVect;
            for(int j=0;j<size;j++)
            {
                if(i&(1<<j))
                {
                    tmpVect.push_back(nums[j]);
                }
            }
            vect.push_back(tmpVect);
        }
        return vect;
    }
};