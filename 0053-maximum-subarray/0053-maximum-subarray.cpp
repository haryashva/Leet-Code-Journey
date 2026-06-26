class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int sum = INT_MIN;
        // for(int i = 0; i < nums.size(); i++){
        //    int count = 0;
        //     for(int j = i ; j < nums.size(); j++){
        //         count += nums[j];
        //         sum = max(count, sum);
        //     }
        // }
        // return sum; 
        //better approach T.C : o(N^2); S.C: o(1);
        int maxi = INT_MIN;
        int sum = 0;
        for(int i = 0; i< nums.size(); i++){
            sum = sum + nums[i];
            
             maxi = max(maxi,sum);
             if(sum < 0) sum = 0;
           
        }

       return maxi;
 





    
    }
};