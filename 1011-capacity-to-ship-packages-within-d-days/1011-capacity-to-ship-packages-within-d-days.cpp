class Solution {
public:
   bool ispossible(vector<int>& weights, int weight, int days){
        int sum = 0;
        int mdays = 1;
        for(int i = 0; i < weights.size(); i++){
           sum += weights[i];
           if(weight < sum){
            mdays++;
            sum = 0;
            sum = weights[i];
           }
        }
    return mdays <= days;
   }







    int shipWithinDays(vector<int>& weights, int days) {
        int max_weight = 0;
        for(int i = 0; i < weights.size(); i++){
           max_weight += weights[i];
        }
       int min_weight = *max_element(weights.begin(),weights.end());
        int ans = 0;
        while(max_weight >= min_weight){
           int weight = min_weight + (max_weight - min_weight) / 2;
            if(ispossible(weights, weight, days)){
                ans = weight;
                max_weight = weight - 1;
            }
            else min_weight = weight + 1;
        }
        return ans;
    }
};