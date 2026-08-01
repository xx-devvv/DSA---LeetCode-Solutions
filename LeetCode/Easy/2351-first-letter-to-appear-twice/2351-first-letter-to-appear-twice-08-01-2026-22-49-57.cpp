class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> freq(26);
        for(int i = 0 ; i <s.size() ; i++){
            if((++freq[s[i]-'a']) == 2) return s[i];
        }
        return 0;
        }
};