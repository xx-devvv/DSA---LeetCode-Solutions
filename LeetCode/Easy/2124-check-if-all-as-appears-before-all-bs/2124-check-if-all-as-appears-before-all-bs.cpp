class Solution {
public:
    bool checkString(string s) {
        bool swt = false;
        for(int i = 0 ; i<s.size() ; i++){
            if(s[i] == 'b') swt = true;
            if(swt && s[i] == 'a') return false;
        }
        return true;
    }
};