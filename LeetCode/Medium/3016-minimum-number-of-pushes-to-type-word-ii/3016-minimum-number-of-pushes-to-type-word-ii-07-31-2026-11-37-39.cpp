class Solution {
public:
    int minimumPushes(string word) {
        vector<int>alp(26,0);
        for(int i = 0 ; i < word.size() ; i++){
            alp[word[i]-'a']++;
        }
        sort(alp.rbegin(),alp.rend());
        int press = 0;
        for(int i = 0 ; i < 26 && alp[i]!=0 ; i++){
            if(i<8) press+=alp[i]*1;
            else if (i<16) press+= (alp[i]*2);
            else if (i<24) press+= (alp[i]*3);
            else press+= (alp[i]*4);
        }
        return press;
    }
};