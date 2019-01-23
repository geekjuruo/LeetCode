class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) {
            vector<int> x(0);
            return x;
        } else {
            int max = nums[0];
        for(int i = 0 ; i < n ; i++) {
            if(nums[i] >= max) {
                max = nums[i];
            }   
        }
        int temp[max + 1];
        for(int i = 0 ; i < max + 1 ; i++) {
            temp[i] = 0; 
        }
        for(int i = 0 ; i < n ; i++) {
            temp[nums[i]]++; 
        }
        int size = 0;
        for(int i = 0 ; i < max + 1 ; i++) {
            if(temp[i] == 2) {
                size++; 
            }
        }
        vector<int> res(size);
        size = 0;
        for(int i = 0 ; i < max + 1 ; i++) {
            if(temp[i] == 2) {
                res[size] = i;
                size++;
            }
        }
        return res;
        }

    }
};