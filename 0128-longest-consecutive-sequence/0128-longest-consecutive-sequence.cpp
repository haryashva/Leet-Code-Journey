class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // better solution 
        // if(nums.empty()) return 0;
        // sort(nums.begin(), nums.end());
        // int first = nums[0];
        // int count = 1;
        // int mcount = 1;
        // for (int i = 1; i < nums.size(); i++) {
        //     if (nums[i] != nums[i - 1]) {
        //         first = first + 1;
        //         if (nums[i] == first)
        //             count++;
        //         else if (nums[i] != first) {
        //             count = 1;
        //             first = nums[i];
        //         }
        //         mcount = max(count, mcount);
        //     }
        // } 
        // return mcount;
       unordered_set<int> wet;
       for(int i = 0; i < nums.size() ; i++ ){
           wet.insert(nums[i]);
       }
       int longest = 1;
       
       for(auto it : wet){
          if(wet.find(it - 1) == wet.end()){
            int count = 1;
            int x = it;
            while(wet.find(x + 1) != wet.end()){
                count = count + 1;
                x = x + 1;
            }
           longest = max( longest, count);
          }

       }
       return longest;

    }
};