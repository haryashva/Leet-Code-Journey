class Solution {
public:

    double TH(vector<int>& pile, int k){
        int n = pile.size();
        double total_hours = 0;
        for(int i = 0; i < pile.size(); i++){
             total_hours += ceil(double(pile[i])/double(k));
        }
        return total_hours;


    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        double ans = 1;
        while(low <= high){
            int mid  = ( low + high)/2;
            double total_hours = TH(piles,mid);
            if(total_hours <= h){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};