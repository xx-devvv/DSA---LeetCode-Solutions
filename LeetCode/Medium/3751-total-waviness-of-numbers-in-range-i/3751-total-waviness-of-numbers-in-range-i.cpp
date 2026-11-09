class Solution {
public:
    int totalWaviness(int num1, int num2) {
            int ans = 0;

        for (int x = num1; x <= num2; x++) {

            string s = to_string(x);

            for (int i = 1; i < s.length() - 1; i++) {

                char previous = s[i-1];
                char current = s[i];
                char next = s[i+1];

                bool isPeak =
                    current > previous && current > next;

                bool isValley =
                    current < previous && current < next;

                if (isPeak || isValley) {
                    ans++;
                }
            }
        }

        return ans;    
    }
};