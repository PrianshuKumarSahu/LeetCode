class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int st = 0, end = nums.size() - 1;
        while (st < end){
            if (nums[st]%2 != 0){
                swap(nums[st], nums[end]);
                end--;
            }else{
                st++;
            }
        }
        return nums;

    }
};