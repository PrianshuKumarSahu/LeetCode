class Solution {
public:

    bool possible(vector<int> &nums, int mid, int threshold){
        int count = 0;
        for (int i = 0; i<nums.size(); i++){
            count += ceil((double)(nums[i]) / (double)(mid));
        }

        return count <= threshold;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int mini = 1;
        int maxi = INT_MIN;
        for (int i = 0; i<nums.size(); i++){
            maxi = max(maxi, nums[i]);
        }
        int ans = -1;
        int low = mini;
        int high = maxi;
        while (low<= high){
            int mid = low + (high - low)/2;
            if(possible(nums, mid, threshold)){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }

        return ans;
    }
};