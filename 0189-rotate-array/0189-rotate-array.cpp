class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        vector<int> temp(k);
        //int temp[k];
        for (int i = 0; i<k; i++){
            temp[i] = nums[n - k + i];
        }
        for (int i = n - 1; i >= k; i--) {
            nums[i] = nums[i-k];
        }

        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }
        // Brute force TLE
        /*int n = nums.size();
        vector<int> copy(n);

        copy = nums;

        for (int j=0; j<k; j++){
            for (int i=n-1; i>0; i--){
                nums[i] = copy[i-1];
            }
            nums[0] = copy[n-1];
            copy = nums; 
        }*/
    }
};