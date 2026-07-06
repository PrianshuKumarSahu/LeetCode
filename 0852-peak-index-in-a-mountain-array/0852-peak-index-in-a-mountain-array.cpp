class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int st=1;
        int end=n-2;
        for (int i=0; i<n; i++){
            int mid = st + (end-st)/2;
            if ((arr[mid-1] < arr[mid]) && (arr[mid] > arr[mid+1])){
                return mid;
            }
            if (arr[mid-1] > arr[mid]){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return -1;
    }
};