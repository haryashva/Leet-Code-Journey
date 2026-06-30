class Solution {
public:

    bool ispossible(vector<int>& nums , int threshold, int divisor){
        int sum = 0;
        for(int i = 0; i < nums.size();i++){
           sum += (nums[i] + divisor - 1) / divisor;
        }
        return sum <= threshold;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
       int min = 1;
       int max = *max_element(nums.begin(), nums.end());

       if(nums.size() > threshold) return 0;
       if(nums.size() == threshold) return max;
       int ans;
       while(max >= min){
           int divisor = min + (max - min)/2;
           if(ispossible(nums,threshold,divisor)){
              ans = divisor;
              max = divisor - 1;
           }
           else min = divisor + 1;
       }
    return ans;
    }
};