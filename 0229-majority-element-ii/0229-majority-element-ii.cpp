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

        return result;
    }
};