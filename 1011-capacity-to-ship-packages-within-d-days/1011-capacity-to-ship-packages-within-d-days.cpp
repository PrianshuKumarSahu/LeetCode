class Solution {
public:

    bool daysReq(vector<int> &weights, int mid, int days){
        int dayTook = 1;
        int load = 0;
        for (int i =0; i<weights.size(); i++){
            if(load + weights[i] > mid){
                dayTook += 1;
                load = weights[i];
            }
            else {
                load += weights[i];
            }
        }
        return dayTook <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int mini = INT_MIN;
        int maxi = 0;
        for(int i =0 ; i<weights.size(); i++){
            maxi += weights[i];
            mini = max(mini, weights[i]);
        }
        int ans = -1;
        int low = mini;
        int high = maxi;
        while (low <= high){
            int mid = low + (high - low)/2;
            if (daysReq(weights, mid, days)){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }

        return ans;
    }
};