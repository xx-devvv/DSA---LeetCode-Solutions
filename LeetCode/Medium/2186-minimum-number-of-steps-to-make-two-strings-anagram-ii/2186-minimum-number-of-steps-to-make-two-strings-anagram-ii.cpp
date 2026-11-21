class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>c1(26);
        vector<int>c2(26);
        for(int i = 0 ; i<s.size() ; i++){
            c1[s[i] - 'a']++;
        }
        for(int i = 0 ; i<t.size() ; i++){
            c2[t[i] - 'a']++;
        }
        int ans = 0;
        for(int i = 0 ; i<26 ; i++){
            ans += abs(c1[i] - c2[i]);
        }
        return ans;
    }
};