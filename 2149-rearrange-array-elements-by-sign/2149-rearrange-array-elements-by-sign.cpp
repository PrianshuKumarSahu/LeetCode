class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans(n,0);
        int posindex = 0;
        int negindex = 1;

        for (int  i = 0; i<n; i++){
            if (nums[i]  < 0){
                ans[negindex] = nums[i];
                negindex += 2;
            }else{
                ans[posindex] = nums[i];
                posindex += 2;
            }
        }

        return ans;


        /*
        vector<int> pos;
        vector<int> neg;                //Brute force

        for (int i = 0; i<n; i++){
            if (nums[i] > 0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }

        for (int i = 0; i<n/2; i++){
            nums[i*2] = pos[i];
            nums[i*2+1] = neg[i];
        }

        return nums;
        */
    }
};