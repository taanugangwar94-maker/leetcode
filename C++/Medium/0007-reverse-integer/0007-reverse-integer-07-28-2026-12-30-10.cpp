class Solution {
public:
    int reverse(int x) {
        int reversedResult = 0;

        while (x != 0) {
            int lastDigit = x % 10;
            x = x / 10;

            if (reversedResult > INT_MAX / 10 ||
                reversedResult < INT_MIN / 10) {
                return 0;
            }

            reversedResult = (reversedResult * 10) + lastDigit;
        }
        return reversedResult;
    }
};