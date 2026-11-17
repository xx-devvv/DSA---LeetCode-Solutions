class Solution {
public:
    int countHomogenous(string s) {
        int n = s.size();
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            long long count = 1;

            while (i < n - 1 && s[i] == s[i + 1]) {
                count++;
                i++;
            }

            sum += count * (count + 1) / 2;
            sum %= 1000000007;
        }

        return sum;
    }
};