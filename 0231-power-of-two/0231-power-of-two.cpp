class Solution {
public:
    bool isPowerOfTwo(int n) {
        /*int copyn = n;
        int lessn = n-1;
        long long bin = 0;
        long long bin2 = 0;
        int rem, i = 1;
        int rem2, i2 = 1;

        while (n!=0) {
            rem = n % 2;
            n /= 2;
            bin += rem * i;
            i *= 10;
        }
        

        while (lessn!=0) {
            rem2 = lessn % 2;
            lessn /= 2;
            bin2 += rem2 * i2;
            i2 *= 10;
        }

        if (bin & bin2 == 0){
            return 1;
        }else{
            return 0;
        }*/
        if (n <= 0) {
            return false;
        }

        // Check if n has only one set bit
        if ((n & (n - 1)) == 0) {
            return true;
        }

        return false;

    }
};