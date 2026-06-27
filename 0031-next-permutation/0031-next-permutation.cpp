class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int brk = -1;
        for(int i = n - 1 ; i > 0 ; i--){
            if(nums[i] > nums[i - 1]){
               brk = i ;
               break; 
            }
        }
        if(brk == -1){
            reverse(nums.begin(), nums.end());
            return;
        }
          for(int j = n -1; j >= brk ; j--){
            if(nums[j] > nums[brk - 1]){
                swap(nums[j], nums[brk -1]);
                break;
            }
          }
          reverse(nums.begin() + brk , nums.end());
    }
};