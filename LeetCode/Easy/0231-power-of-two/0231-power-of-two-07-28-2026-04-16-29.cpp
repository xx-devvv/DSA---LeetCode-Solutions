#include <cmath>

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;

        double x = log(n)/log(2);
        return fabs(x - round(x)) < 1e-10;
    }
};