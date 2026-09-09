class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MIN;
        int ansIndex = 0;
        for (int i = 0; i<n; i++){
            if ( ans < nums[i]){
                ans = nums[i];
                ansIndex = i;
            }
        }
        return ansIndex;
    }
};