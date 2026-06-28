class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    int n = nums.size();
    if(nums.empty()) return {-1,-1};
    int floor = n; // largest element in the array such a[floor] <= x;
	int ceil = n;  // smallest element in the array such a[ceil] >= x;
    int low = 0;
	int high = n -1;
	while(low <= high){
		int mid = (low + high)/2;
        if(nums[mid] >= target){
			ceil = mid;
			high = mid - 1;
		}
        else low = mid + 1;
	}
	
	low = 0;
	high = n -1;
	while(low <= high){
		int mid = (low + high)/2;
		if(nums[mid] <= target){
			floor = mid;
			low = mid + 1;
		}
		else high = mid - 1;
	}
	
   if( floor != n && ceil != n && nums[ceil] == target && nums[floor] == target)
	return {ceil,floor};

    else return {-1,-1};
    }
};