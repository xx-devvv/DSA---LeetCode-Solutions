class Solution {
public:
    void makezero(vector<vector<int>> &m, int i , int j){
        for(int k = 0 ; k<m[0].size() ; k++){
            m[i][k] = 0;

        }
        for(int k = 0 ; k<m.size() ; k++){
            m[k][j] = 0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>r;
        vector<int>c;
        int n = matrix.size(), m = matrix[0].size();
        for(int i = 0 ; i<n;i++){
            for(int j = 0 ; j<m ; j++){
                if(matrix[i][j] == 0){
                    r.push_back(i);
                    c.push_back(j);
                }
            }
        }
        for(int i = 0 ; i<r.size(); i++){
            makezero(matrix,r[i],c[i]);
        }
        return;
    }
};