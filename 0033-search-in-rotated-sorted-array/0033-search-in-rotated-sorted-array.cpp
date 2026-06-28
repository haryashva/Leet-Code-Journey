class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int n = nums.size();
        int high = n - 1;
        // while (low <= high) {
        //     int mid = (low + high) / 2;
        //     if (nums[mid] == target)
        //         return mid;
            
        //     if (nums[mid] > target) {
        //         if (nums[low] <= target) {
        //             high = mid - 1;
        //         } else
        //             low = mid + 1;
        //     } else {
        //         if (nums[high] >= target) {
        //             low = mid + 1;
        //         } else
        //             high = mid - 1;
        //     }
        // }
        while(low <= high){
            int mid  = (low + high)/2;
            if(nums[mid] == target) return mid;
            
            if(nums[mid] >= nums[low]){ // left half is sorted
                 if(nums[mid] > target && nums[low] <= target ){ high = mid - 1;}
                 else{ low = mid + 1; }
            }
            
            else {  // right half is sorted.
                if(nums[mid] < target && nums[high] >= target){ low = mid + 1; }
                else{ high = mid - 1;}
            }

        }
        return -1;
    }
};