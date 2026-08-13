class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        /*set<int> st;
        int index = 0;
        for (int val : nums){
            st.insert(val);
        }                                  //brute Force

        for (int uniq : st){
            nums[index] = uniq;
            index++;
        }

        return index;*/

        if (nums.empty()) return 0;
        
        int i = 0; 
        int j = 1;
        //int count = 1;
        while (j < nums.size()){
            if (nums[i] == nums[j]){
                j++;
            }else if(nums[i] != nums[j]){
                i++;
                //count++;
                nums[i] = nums[j];
            }
        }
        return i+1;

    }
};