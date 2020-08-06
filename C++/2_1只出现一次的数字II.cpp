class Solution {
public:
    int singleNumber(vector<int>& nums) {
         int a;
        int size = nums.size();
        for(int i = 0;i < size;i++){
            for(int j = 0;j < size-i-1;j++){
                if(nums[j] < nums[j+1]){
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }
        
        if(nums[0]!=nums[1]){
            a = nums[0];
        }
        if(nums[size-2]!=nums[size-1]){
            a = nums[size-1];
        }
        for(int i = 1;i < size-1;i++){
            if(nums[i]!=nums[i-1] && nums[i]!=nums[i+1]){
                a = nums[i];
            }
        }
        return a;
    }
};