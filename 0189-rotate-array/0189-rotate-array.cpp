class Solution {
public:

    void reverseArray(vector<int>& nums, int start, int end) {
        while (start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0 || k == 0) return;
        k = k%n;

        reverseArray(nums, 0, n - 1);
        reverseArray(nums, 0, k - 1);
        reverseArray(nums, k, n - 1);


        //BETTER 
        /*vector<int> temp(k);
        //int temp[k];
        for (int i = 0; i<k; i++){
            temp[i] = nums[n - k + i];
        }
        for (int i = n - 1; i >= k; i--) {
            nums[i] = nums[i-k];
        }

        for (int i = 0; i < k; i++) {
            nums[i] = temp[i];
        }*/


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