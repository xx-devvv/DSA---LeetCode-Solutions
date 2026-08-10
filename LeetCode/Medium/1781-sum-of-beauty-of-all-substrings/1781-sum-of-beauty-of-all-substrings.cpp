class Solution {
public:
    int beauty(int freq[]) {
        int maxi = 0;
        int mini = INT_MAX;

        for(int i = 0; i < 26; i++) {
            if(freq[i] > 0) {
                maxi = max(maxi, freq[i]);
                mini = min(mini, freq[i]);
            }
        }

        return maxi - mini;
    }

    int beautySum(string s) {
        int total = 0;

        for(int i = 0; i < s.size(); i++) {

            int freq[26] = {0};

            for(int j = i; j < s.size(); j++) {

                // Add the new character
                freq[s[j] - 'a']++;

                total += beauty(freq);
            }
        }

        return total;
    }
};