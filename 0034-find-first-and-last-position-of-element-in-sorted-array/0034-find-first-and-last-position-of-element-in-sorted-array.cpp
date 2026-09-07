class Solution {
public:

    int lowerBound(vector<int> &nums, int n, int target){
        int low = 0;
        int high = n-1;
        int ans = n;
        while (low <= high){
            int mid = low + (high - low)/2;
            if (nums[mid] >= target){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }

    int upperBound(vector<int> &nums, int n, int target){
        int low = 0;
        int high = n-1;
        int ans = n;
        while (low <= high){
            int mid = low + (high - low)/2;
            if (nums[mid] > target){
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }


    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector <int> ans;
        int lb = lowerBound(nums, n, target);
        int ub = upperBound(nums, n, target);

        if (lb == n || nums[lb] != target){
            ans.insert(ans.end(),{-1 , -1});
            return ans;
        }

        ans.insert(ans.end(),{lb, ub-1});
        return ans;
    }
};