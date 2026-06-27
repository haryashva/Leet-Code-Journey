class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int n = nums.size();

	 int ans = n; 
	 int high = n-1;
	 while(low <= high){
     int mid = (low + high)/2;
	 if(nums[mid] >= target){
		 ans = mid;
		 high = mid - 1;
	 }
	 if(nums[mid] < target){
		 low = mid + 1;
	   }
	 }
	 return ans;
    }
};