class Solution {
public:
    int divide(int dividend, int divisor) {
          if (divisor == -1 && dividend == -2147483648)
             return 2147483647;

        long long result= dividend/divisor;
        return result;
    }
};