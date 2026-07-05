class Solution {
public:
    bool isValid(vector<int>& arr, int m, int mid, int n){
        int k = 1, num = 0;
        for (int i=0; i<n; i++){
            if (arr[i] > mid){
                return false;
            }
            if (num + arr[i] <= mid){
                num += arr[i];
            }else{
                k++;
                num = arr[i];
            }
        }
        return k > m ? false : true;
    }

    int splitArray(vector<int>& arr, int m) {
        int n = arr.size();
        if (m>n){
            return -1;
        }
        int sum = 0;
        for (int i=0 ; i<n ; i++){
            sum += arr[i];
        }
        int ans = -1;
        int st = 0, end = sum;
        while ( st <= end){
            int mid = st + (end-st)/2;
            if (isValid(arr ,m ,mid ,n)){
                ans = mid;
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return ans;
    }
};