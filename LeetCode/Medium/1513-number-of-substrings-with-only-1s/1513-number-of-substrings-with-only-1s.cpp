class Solution {
public:
    int numSub(string s) {
        long long sum = 0;

        for(long long i = 0; i < s.size(); i++) {
            long long count = 0;

            while(i < s.size() && s[i] == '1') {
                count++;
                i++;
            }

            sum = (sum + count * (count + 1) / 2) % 1000000007;
        }

        return sum;
    }
};