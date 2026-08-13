class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int ans=0;
        int i=0, j=0;
        unordered_map<char, int>mpp;
        while(i<n && j<n){
            while(j<n && !mpp[s[j]]) mpp[s[j]]++, j++;
            ans=max(ans, j-i);
            while(i<n && mpp[s[j]]) mpp[s[i]]--, i++;
        }
        return ans;

    }
};
