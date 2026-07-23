class Solution {
public:
    bool isEqual(int n1[], int n2[]){
        for(int i = 0 ; i < 26 ; i++){
            if(n1[i] != n2[i]) return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for(int i = 0 ; i < s1.size() ; i++){
            int idx = s1[i] - 'a';
            freq[idx]++;
        }
        // now freq contains the frequency of all the indices of letters

        int windowsize = s1.size();
        //to calculate the window size

        for(int i = 0 ; i < s2.size(); i++){
            int windowidx = 0, idx = i;
            int windowfreq[26] = {0};
            while(windowidx < windowsize && idx < s2.size()){
                int widx = s2[idx] - 'a';
                windowfreq[widx]++;
                windowidx++;
                idx++;
            }
            if(isEqual(windowfreq,freq)) return true;
        }
        return false;
    }
};