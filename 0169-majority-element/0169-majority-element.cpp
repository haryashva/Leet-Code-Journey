class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // better solution
        // int n = nums.size()/2;
        // unordered_map<int,int> mp;
        // for(int i =0; i < nums.size();i++){
        //     mp[nums[i]]++;
        //     if(mp[nums[i]] > n) return nums[i];
        // }
        //     return 0 ;
        
        int n = nums.size();
        int cnt = 0;
        int el;
        for(int i =0; i<n;i++){
            if(cnt == 0){
                cnt = 1;
                el = nums[i];
            }
            else if(el == nums[i]){
                cnt++;
            }
            else{ cnt--; }
        }

return el;


    }

};