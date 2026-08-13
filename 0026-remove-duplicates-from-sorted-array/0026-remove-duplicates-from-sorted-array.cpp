class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        int index = 0;
        for (int val : nums){
            st.insert(val);
        }

        for (int uniq : st){
            nums[index] = uniq;
            index++;
        }

        return index;
    }
};