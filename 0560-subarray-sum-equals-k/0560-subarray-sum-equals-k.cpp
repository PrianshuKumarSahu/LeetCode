class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        map <int, int> mpp;
        mpp[0] = 1;
        int preSum = 0, count = 0;
        for(int i = 0; i<n; i++){
            preSum += arr[i];
            int remove = preSum - k;
            count += mpp[remove];
            mpp[preSum] +=1;
        }

        /*
        int count = 0;

        vector<int> prefixSum(n,0);

        prefixSum[0] = arr[0];
        for (int i=1; i<n; i++){
            prefixSum[i] = prefixSum[i-1] + arr[i];
        }

        unordered_map<int, int>m;
        for (int j=0; j<n; j++){
            if(prefixSum[j] == k) count++;

            int val = prefixSum[j] - k;
            if(m.find(val) != m.end()){
                count += m[val];
            }

            if(m.find(prefixSum[j]) == m.end()){
                m[prefixSum[j]] = 0;
            }
            m[prefixSum[j]]++;
        }
        */



        //BRUTE FORCE
        /*
        for (int i = 0; i<n; i++){
            int sum = 0;
            for (int j =i; j<n; j++){
                sum += arr[j];
                
                if(sum == k){
                    count++;
                }
            }
        }
        */

        return count;
    }
};