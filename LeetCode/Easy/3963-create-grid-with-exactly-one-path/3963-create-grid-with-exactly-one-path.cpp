class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<vector<char>> a(m, vector<char>(n));

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(j == 0 || i == m-1){
                    a[i][j] = '.';
                }
                else{
                    a[i][j] = '#';
                }
            }
        }

        vector<string> ans;

        for(int i = 0; i < m; i++){
            string s = "";
            for(int j = 0; j < n; j++){
                s += a[i][j];
            }
            ans.push_back(s);
        }

        return ans;
    }
};