class Solution {
public:
    /*int search(vector<int>& nums, int target) {
        int n = nums.size();
        int st = 0;
        int end = n-1;
        int ans = -1;
        for (int i = 0; i<n; i++){
            int mid = st + (end-st)/2; // (st+end)/2 , both are same 
            if (target > nums[mid]){
                st = mid+1;
            }else if (target < nums[mid]){
                end = mid-1;
            }else{
                ans = mid;
            }
        }
        return ans;
    }*/

    //helper function
    int binSearch(vector<int>& arr, int tar, int st, int end){
        if(st <= end){
            int mid = st + (end-st)/2;

            if(arr[mid] == tar) return mid;
            else if(arr[mid] <= tar){
                return binSearch(arr, tar, mid+1, end);
            }else{
                return binSearch(arr, tar, st, mid-1);
            }

        }
        return -1;
    }

    int search(vector<int>& arr, int tar){
        return binSearch(arr, tar, 0, arr.size()-1);
    }
};