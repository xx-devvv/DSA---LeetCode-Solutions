class Solution {
public:
    bool isPowerOfFour(int n) {
        float ans = log(n)/log(4);
        return abs(ans-round(ans))<1e-10;
    }
};