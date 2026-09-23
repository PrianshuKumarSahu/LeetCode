class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        int prev = 0;
        for (char ch : s){
            int val;

            if (ch == 'I') val = 1;
            else if (ch == 'V') val = 5;
            else if (ch == 'X') val = 10;
            else if (ch == 'L') val = 50;
            else if (ch == 'C') val = 100;
            else if (ch == 'D') val = 500;
            else val = 1000;

            if (val > prev)
                sum += val - 2 * prev;
            else
                sum += val;

            prev = val;
        }

        return sum;
    }
};