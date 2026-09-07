class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        /*
        int n = nums.size();
        int start = 0;
        int end = n-1;
        while (start <= end){
            int mid = start + (end - start)/2;

            if (nums[mid] == target){
                return mid;
            }
            else if (nums[mid] < target){
                start = mid+1;
            }
            else if (nums[mid] > target){
                end = mid-1;
            }
            
            
        }
        return start;
        */

        int n = nums.size();
        int low = 0;
        int high = n-1;
        int ans = n;
        while (low <= high){
            int mid = low + (high-low)/2;
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
};