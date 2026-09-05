class Solution {
public:

    vector<int> NthRow ( int n){
            long long res = 1;
            vector <int> ansRow;
            ansRow.push_back(1);
            for (int i = 1; i<n; i++){
                res *= (n-i);
                res /= i;
                ansRow.push_back(res);
            }
            return ansRow;
        }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 0; i<numRows; i++){
            vector<int> temp = NthRow(i+1);
            ans.push_back(temp);
        }

        return ans;
    }
};