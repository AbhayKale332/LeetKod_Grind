class Solution {
public:
    bool checkDivisibility(int n) {
        int num = n;
        int sum = 0;
        int prod = 1;
        int digit;

        while (n > 0) {
            digit = n % 10;
            sum += digit;
            prod *= digit;
            n /= 10;
        }
        if (num%(sum + prod) == 0)
            return true;
        else
            return false;
    }
};