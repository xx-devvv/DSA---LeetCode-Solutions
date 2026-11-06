class Solution {
public:
    int noof1(string s){
        int count = 0;
        for(int i = 0 ; i<s.size() ; i++){
            if(s[i]=='1') count++;
        }
        return count;
    }
    int numberOfBeams(vector<string>& s) {
        if(s.size() == 1) return 0;
        vector<int>lasers;
        for(int i = 0 ; i<s.size() ; i++){
            if((noof1(s[i]))!=0) lasers.push_back(noof1(s[i]));
        }
        if(lasers.size() == 0) return 0;        
        int nol = 0;
        int prod = lasers[0];
        for(int i = 0 ; i<lasers.size()-1 ; i++){
            nol+=prod*lasers[i+1];
            prod=lasers[i+1];
        }
        return nol;
    }
};