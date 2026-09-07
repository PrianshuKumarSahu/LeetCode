class Solution {
public:

    int startIndex(vector<int> &nums, int n, int target){
        int low = 0;
        int high = n-1;
        int start = -1;
        while (low <= high){
            int mid = low + (high - low)/2;
            if (nums[mid] == target){
                start = mid;
                high = mid-1;
            }else if (nums[mid] > target){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return start;
    }

    int lastIndex(vector<int> &nums, int n, int target){
        int low = 0;
        int high = n-1;
        int last = -1;
        while (low <= high){
            int mid = low + (high - low)/2;
            if (nums[mid] == target){
                last = mid;
                low = mid + 1;
            }else if (nums[mid] > target){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return last;
    }


    /*
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
    */


    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector <int> ans;
        
        /*
        int lb = lowerBound(nums, n, target);
        int ub = upperBound(nums, n, target);

        if (lb == n || nums[lb] != target){
            ans.insert(ans.end(),{-1 , -1});
            return ans;
        }

        ans.insert(ans.end(),{lb, ub-1});
        */

        int start = startIndex(nums, n, target);
        if (start == -1){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }

        int last = lastIndex(nums, n, target);

        ans.push_back(start);
        ans.push_back(last);

        return ans;
    }
};
