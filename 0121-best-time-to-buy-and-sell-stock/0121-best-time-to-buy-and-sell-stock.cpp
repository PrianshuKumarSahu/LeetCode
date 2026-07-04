class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int bb = prices[0];
        int mp = 0;
        for (int i=0; i<n; i++){
            if (prices[i]>bb){
                mp = max(mp, prices[i]-bb);
            }
            bb = min(bb, prices[i]);
        }
        return mp;
    }
};