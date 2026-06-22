class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int a = 0;
        int b = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                a++;
            } else if (nums[i] == 0) {
                if (b < a) {
                    b = a;
                    a = 0;
                }
                a = 0;
            }
        }
        if (a > b) return a;
        return b;
    }
};