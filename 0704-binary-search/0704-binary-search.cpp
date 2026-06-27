class Solution {
public:
    int fs(vector<int>& arr, int low, int high, int  target) {
        if (low > high)
            return -1;
        int  mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            return fs(arr, mid + 1, high, target);
        else
            return fs(arr, low, mid - 1, target);
    }

    int search(vector<int>& nums, int target) {
        // recrusion
        return fs(nums, 0, nums.size() - 1, target);
    }
};