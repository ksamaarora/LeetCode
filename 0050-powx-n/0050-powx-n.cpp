class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1;        // Base case: x^0 = 1
        if (n < 0) {
            if (n == INT_MIN) {
                n = INT_MAX; // Convert n to INT_MAX instead of directly negating it
                x = 1 / x;
                return x * myPow(x, n); // Reduce the problem by one multiplication
            } else {
                x = 1 / x;
                n = -n;
            }
        }
        if (n % 2 == 0) {
            double half = myPow(x, n / 2);
            return half * half;      // x^n = (x^(n/2)) * (x^(n/2))
        } else {
            return x * myPow(x, n - 1); // x^n = x * x^(n-1)
        }
    }
};
