class Solution {
public:
    int myAtoi(string s) {
        bool isNeg = false;
        int n = s.size();
        int i = 0;
        long long number = 0;

        while (i < n && s[i] == ' ') {
            i++;
        }

        if (i == n) return 0;

        if (s[i] == '-') {
            isNeg = true;
            i++;
        }
        else if (s[i] == '+') {
            i++;
        }

        for (; i < n; i++) {
            if (s[i] >= '0' && s[i] <= '9') {

                int digit = s[i] - '0';
                if (number > (INT_MAX - digit) / 10) {
                    return isNeg ? INT_MIN : INT_MAX;
                }

                number = number * 10 + digit;
            }
            else {
                break;
            }
        }

        if (isNeg) return -number;
        return number;
    }
};