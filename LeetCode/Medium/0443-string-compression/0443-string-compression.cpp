class Solution {
public:
    int compress(vector<char>& chars) {
        int ans = 0;

        for (int i = 0; i < chars.size();) {
            const char letter = chars[i];
            int count = 0;

            while (i < chars.size() && chars[i] == letter) {
                count++;
                i++;
            }

            chars[ans++] = letter;

            if (count > 1) {
                string s = to_string(count);

                for (int j = 0; j < s.size(); j++) {
                    chars[ans++] = s[j];
                }
            }
        }

        return ans;
    }
};