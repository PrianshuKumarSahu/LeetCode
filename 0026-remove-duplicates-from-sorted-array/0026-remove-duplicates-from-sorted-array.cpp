class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        //Brute force
        /*set <int> st;
        for (int val : nums){
            st.insert(val);
        }

        int index = 0;
        for (auto uniq : st ){
            nums[index] = uniq;
            index++;
        }

        return index;*/

        //Optimal
        int i = 0;

        if ( nums.size() == 0) return 0;

        for (int j = 1; j < nums.size(); j++){
            if (nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};