class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        
        /*
        int x = n/3;
        for (int  i = 0; i<n; i++){         // Brute force approach
            if(result.size() == 0 || result[0] != nums[i]){
                int count=0;
                for(int j =0; j<n; j++){
                    if (nums[i] == nums[j]){
                        count++;
                    }
                }
                if (count > n/3){
                    result.push_back(nums[i]);
                }
            }
            if (result.size() == 2){
                break;
            }
        }
        */

        /*
        //BETTER APPROACH
        unordered_map<int, int> mpp;
        int minimum = int(n/3) + 1;

        for (int  i = 0; i < n; i++){
            mpp[nums[i]]++;

            if (mpp[nums[i]] == minimum){
                result.push_back(nums[i]);
            }

            if(result.size() == 2){
                break;
            }
        }
        */

        //OPTIMAL APPROACH
        int cnt1 = 0, cnt2 = 0;

        int el1 = INT_MIN, el2 = INT_MIN;

        for (int i = 0; i < n; i++){

            if (cnt1 == 0 && el2 != nums[i]){
                cnt1 = 1;
                el1 = nums[i];
            }
            else if(cnt2 == 0 && el1 != nums[i]){
                cnt2 = 1;
                el2 = nums[i];
            }
            else if(nums[i] == el1){
                cnt1++;
            }
            else if(nums[i] == el2){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }

        cnt1 = 0, cnt2 = 0;

        for (int  i = 0; i<n; i++){
            if (nums[i] == el1){
                cnt1++;
            }

            if (nums[i] == el2){
                cnt2++;
            }
        }

        int mini = int(n/3) + 1;

        //vector<int> result;

        if (cnt1 >= mini){
            result.push_back(el1);
        }
        if (cnt2 >= mini && el1 != el2){
            result.push_back(el2);
        }


        return result;
    }
};