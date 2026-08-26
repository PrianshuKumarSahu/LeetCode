class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i<n; i++){
            if (nums[i] == target){
                ans.push_back(i);
            }
        }

        return ans;


        /*vector<int> ans;
        sort(nums.begin(), nums.end());
        int st = 0;
        int end = nums.size()-1;
        while (st < end){
            int mid = st + (end-st)/2;
            if (nums[mid] == target){
                ans.push_back(mid);
            }
            else if (nums[mid] < target){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }

        return ans;*/
    }
};