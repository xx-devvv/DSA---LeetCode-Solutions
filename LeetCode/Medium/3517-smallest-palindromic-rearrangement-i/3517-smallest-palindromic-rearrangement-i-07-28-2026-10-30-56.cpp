class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        string subs;
        if(n%2 == 0){
            subs = s.substr(0,n/2);
        string s2 = subs;
        sort(subs.begin(),subs.end());
        sort(s2.begin(),s2.end(), greater<char>());
        return subs+s2;
        }
        else{
            string mids = "";
            mids+=s[n/2];
            subs = s.substr(0,n/2);
            string s2 = subs;
        sort(subs.begin(),subs.end());
        sort(s2.begin(),s2.end(), greater<char>());
        return subs +mids +s2;
        }
        return s;
    }
};