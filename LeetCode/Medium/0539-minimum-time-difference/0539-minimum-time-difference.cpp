class Solution {
public:
    int findMinDifference(vector<string>& time) {
        string s; 
        vector<int> ans;
        for(int i = 0 ; i<time.size() ; i++){
            string h = "";
            string m = "";
            for(int j = 0 ; j < 2 ; j++){
                h+=time[i][j];
            }
            for(int j = 3 ; j<5 ; j++){
                m+=time[i][j];
            }
            int hr = stoi(h);
            int mn = stoi(m);
            int total = hr*60 + mn;
            ans.push_back(total);
        }
        sort(ans.begin(),ans.end());
        int diff = INT_MAX;
        int mint = INT_MAX;
        for(int i = 0 ; i<ans.size()-1 ; i++){
            diff = ans[i+1]-ans[i];
            mint = min(mint, diff);
        }
        diff = abs(ans[ans.size()-1] - ans[0]- 24*60);
        mint = min(mint, diff);
        return mint;
    }
};