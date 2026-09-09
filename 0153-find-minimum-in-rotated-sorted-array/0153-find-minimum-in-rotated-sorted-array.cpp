class Solution {
public:
    int findMin(vector<int>& nums) {
        /*
        sort(nums.begin(), nums.end());
        return nums[0];
        */

        int n = nums.size();
        int ans = INT_MAX;
        int low = 0;
        int high = n-1;
        while (low <= high){
            int mid = low + (high-low)/2;
            
            if (nums[low] <= nums[mid]){
                ans = min(ans,nums[low]);
                low = mid + 1;
            }else{
                ans = min(ans, nums[mid]);
                high = mid - 1;
            }
        }

        return ans;
    }
};