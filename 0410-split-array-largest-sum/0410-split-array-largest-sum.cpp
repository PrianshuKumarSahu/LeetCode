class Solution {
public:
    int noStudent(vector<int> &arr, long long pages){
        int stuCnt = 1;
        long long pageStudent = 0;
        for (int i = 0; i<arr.size(); i++){
            if(arr[i] > pages){
                return INT_MAX;
            }
            if (pageStudent + arr[i] <= pages){
                pageStudent += arr[i];
            }
            else{
                stuCnt += 1;
                pageStudent = arr[i];
            }
        }
        return stuCnt;
        
    }
  
    int findPages(vector<int> &arr, int k) {
        
        if (k>arr.size()) return -1;
        
        long long mini = INT_MAX;
        long long maxi = 0;
        for(int i = 0; i< arr.size(); i++){
            maxi += arr[i];
            mini = min(mini, (long long)arr[i]);
        }
        
        long long low = mini;
        long long high = maxi;
        int count;
        
        while(low <= high){
            long long mid = low + (high - low)/2;
            count = noStudent(arr, mid);
            if (count <= k){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }

    int splitArray(vector<int>& nums, int k) {
        return (findPages(nums, k));
    }
};