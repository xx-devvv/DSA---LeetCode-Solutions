class Solution {
public:
    int longestContinuousSubstring(string s) {
        int left = 0, right = 0;
        int count = 1, maxcount = 1;
        while(right<s.size()){
            count = 1;
            while(s[right+1] - s[right] == 1){
                count++;
                right++;
            }
            left++;
            right = max(left,right);
            maxcount = max(count, maxcount);
        }
        return maxcount;
    }
};