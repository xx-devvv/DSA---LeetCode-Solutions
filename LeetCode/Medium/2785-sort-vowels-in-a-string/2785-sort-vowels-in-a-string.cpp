class Solution {
public:
    string sortVowels(string s) {
        vector<char> vowels;
        vector<int> place;
        for(int i = 0 ; i<s.size() ;i++){
            if(s[i] == 'a' ||s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||s[i] == 'u' ||s[i] == 'A' ||s[i] == 'E' ||s[i] == 'I' || s[i] == 'O' ||s[i] == 'U'){
                place.push_back(i);
                vowels.push_back(s[i]);
            }
        }
        sort(vowels.begin(), vowels.end());
        int x = 0;
        string ans = "";
        for(int i = 0 ; i<s.size() ;i++){
            if(x<place.size() && i == place[x]){
                ans+=vowels[x];
                x++;
            }
            else{
            ans+=s[i];
            }
        }
        return ans;
    }
};