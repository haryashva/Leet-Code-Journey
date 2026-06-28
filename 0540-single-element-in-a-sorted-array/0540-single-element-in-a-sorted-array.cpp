class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // int low = 0;
        // int high = nums.size() - 1;
        // My approach !!
        // if(high == 0) return nums[0];
        // while (low <= high) {
        //     int mid = (low + high) / 2;
        //     if (mid % 2 == 0) {
        //         if (mid != nums.size() -1 && nums[mid] == nums[mid + 1]) {
        //             low = mid + 1;
        //         } else if (mid != 0 && nums[mid] == nums[mid - 1]) {
        //             high = mid - 1;
        //         } else {
        //             return nums[mid];
        //         }
        //     }
        //     else {
        //         if (nums[mid] == nums[mid + 1]) {
        //             high = mid - 1;
        //         } else if (nums[mid] == nums[mid - 1]) {
        //             low = mid + 1;
        //         } else {
        //             return nums[mid];
        //         }
        //     }
        // }
        // return -1;
        int low = 1;
        int high = nums.size() - 2;
        if (nums.size() == 1)
            return nums[0];
        if (nums[0] != nums[1])
            return nums[0];
        if (nums[nums.size() - 1] != nums[nums.size() - 2])
            return nums[nums.size() - 1];
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
                return nums[mid];
            if ((mid % 2 == 0 && nums[mid] == nums[mid + 1]) ||
                (mid % 2 == 1 && nums[mid - 1] == nums[mid])) {
                low = mid + 1;
            } 
            else
                high = mid - 1;
        }
        return 0;
    }
};