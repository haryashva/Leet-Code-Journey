class Solution {
public:
    bool ispossible(vector<int>& bloomDay, int Day, int m ,int k){
        int count = 0;
        int Mcount = 0;
        for(int i = 0; i < bloomDay.size() ; i++){
        if(Day >= bloomDay[i]){
            count++;
            if(count == k){
               Mcount++;
               count = 0;
            }
        }
        else count = 0;
        }
        return Mcount >= m;
    }



    int minDays(vector<int>& bloomDay, int m, int k) {
        if(1ll*m*k > bloomDay.size()) return -1;
        int min = *min_element(bloomDay.begin(),bloomDay.end());
        int max = *max_element(bloomDay.begin(),bloomDay.end());
        
        // for(int day = min; day <= max ; day++){
        //     if(ispossible(bloomDay,day,m,k)) return day;
        // } 
        int ans = 0;
        while(min <= max){
            int day = min + (max - min)/2;
           if(ispossible(bloomDay,day,m,k)){
              ans = day ;
              max = day - 1;
           }
           else min = day + 1;
        }
        return ans;   
    }
};