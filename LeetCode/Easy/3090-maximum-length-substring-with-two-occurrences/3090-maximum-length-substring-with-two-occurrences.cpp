class Solution {
public:
    int maximumLengthSubstring(string s) {
        int count = 0, maxcount = 0;

        for (int i = 0; i < s.size(); i++) {
            unordered_map<char, int> mp;
            count = 0;

            while (i < s.size() && mp[s[i]] < 2) {
                mp[s[i]]++;
                count++;
                i++;
            }

            i -= count;

            maxcount = max(maxcount, count);
        }

        return maxcount;
    }
};