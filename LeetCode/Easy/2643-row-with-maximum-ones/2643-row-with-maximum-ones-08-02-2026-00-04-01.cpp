class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int col = mat[0].size();
        int count  = 0, maxc = 0, row=0;
        for(int i = 0 ; i < mat.size() ;i++){
            count = 0;
            for(int j = 0 ; j<mat[0].size();j++){
                if(mat[i][j] == 1) count++;
            }
            if(count>maxc){
                maxc = count;
                row = i;
            }
        }
        return {row, maxc};
    }
};