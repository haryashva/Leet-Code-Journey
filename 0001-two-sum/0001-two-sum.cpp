class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //   Brute approach
        //  for (int i = 0; i < nums.size(); i++) {
        //         for (int j = i + 1; j < nums.size(); j++){
        //             if(nums[i] + nums[j] == target){
        //                 return {i,j};
        //             }
        //         }
        //     }
        //     return {};
        // }

        //better approach or best for this case.
        // unordered_map<int,int> mp;
        // for(int i = 0; i < nums.size(); i++){
        //     int complement = target - nums[i];
        //     if(mp.find(complement) /* return key index */ != mp.end()){
        //         return {mp[complement], i};
        //     }
        //     mp[nums[i]] = i;
        // }
        // return {};
       
       vector<pair<int,int>> numswithindex ;
       for(int i = 0; i < nums.size() ; i++){
          numswithindex.push_back({nums[i], i});
       }
       
       sort(numswithindex.begin(),numswithindex.end());

       int left = 0;
       int right = nums.size() - 1;

       while(left < right){
           int sum = numswithindex[left].first + numswithindex[right].first;
           if(sum > target){
             right--;
           }
           if(sum < target){
            left++;
           }
           if(sum == target){
              return {numswithindex[left].second, numswithindex[right].second};
           }
       }
       return {};


    }
    };