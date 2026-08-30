class Solution {
public:
    int singleNumber(vector<int>& number) {
        int answer = 0;
        for (int value: number){
            answer ^=value;
        }
        return answer;
    }
};