
class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {

        int MOD = 1e9 + 7;

        int even = 1;
        int odd = 0;

        int prefix = 0;
        long long ans = 0;

        for(int x : arr) {

            prefix += x;

            if(prefix % 2 == 0) {

                ans += odd;
                even++;

            }
            else {

                ans += even;
                odd++;

            }

            ans %= MOD;
        }

        return ans;
    }
};
