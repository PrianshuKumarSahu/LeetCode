class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        /*
        for (int  i = 0; i<n; i++){         // Brute force approach
            int count=0;
            for(int j =0; j<n; j++){
                if (nums[i] == nums[j]){
                    count++;
                }
            }
            if (count > n/2){
                return nums[i];
            }
        }*/
        
    
        int freq=0, ans=0;              //Optimal approach
        for (int i=0; i<n; i++){           // Dutch national flag algo
            if (freq == 0){
                ans = nums[i];
            }
            if (ans == nums[i]){
                freq++;
            }else{
                freq--;
            }
        }
        return ans;

        return 0;
    }
};