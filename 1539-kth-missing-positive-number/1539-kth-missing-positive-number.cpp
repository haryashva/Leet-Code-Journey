class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // int i = 0; int j = 1;
        // int count = 0;
        // while(count < k){
        //    if(i < arr.size() && arr[i] == j){
        //     i++;
        //    }
        //    else{
        //    count++;
        //    if(count == k) return j;
        //    }
        //   j++;
        // }
        // return -1;
        // 
        int low = 0, high = arr.size() - 1;

        // Perform binary search
        while (low <= high) {
            int mid = (low + high) / 2;

            // Calculate how many numbers are missing till vec[mid]
            int missing = arr[mid] - (mid + 1);

            if (missing < k) {
                low = mid + 1;  // Move right to find more missing numbers
            } else {
                high = mid - 1; // Move left to find a smaller valid index
            }
        }

        // After loop, 'high' points to the largest index such that
        // number of missing elements till there < k
        return k + high + 1;
    }
};