class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int first = nums[0];
        int count = 1;
        int mcount = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                first = first + 1;
                if (nums[i] == first)
                    count++;
                else if (nums[i] != first) {
                    count = 1;
                    first = nums[i];
                }
                mcount = max(count, mcount);
            }
        } 
        return mcount;
    }
};