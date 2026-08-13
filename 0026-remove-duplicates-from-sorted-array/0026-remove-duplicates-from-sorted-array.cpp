class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        //Brute force
        set <int> st;
        for (int val : nums){
            st.insert(val);
        }

        int index = 0;
        for (auto uniq : st ){
            nums[index] = uniq;
            index++;
        }

        return index;
    }
};