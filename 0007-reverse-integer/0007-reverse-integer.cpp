class Solution {
public:
    int reverse(int num) {
        int revNum = 0;
        while (num!=0){
            int dig = num%10;
            if (revNum > INT_MAX/10 || revNum < INT_MIN/10){
                return 0;
            }
            revNum = revNum * 10 + dig;
            num = num/10; 
        }
        return revNum;
    }
};