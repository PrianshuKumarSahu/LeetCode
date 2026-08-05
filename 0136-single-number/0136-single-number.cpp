class Solution {
public:
    int singleNumber(vector<int>& number) {
        int ans = 0;
        for (int value: number){
            ans ^=value;
        }
        return ans;
    }
};