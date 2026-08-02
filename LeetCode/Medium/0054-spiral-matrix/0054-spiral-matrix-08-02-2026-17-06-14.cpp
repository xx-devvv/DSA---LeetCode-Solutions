class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int trow = 0, rcol = matrix[0].size()-1, brow = matrix.size()-1, lcol = 0;
        while(trow<=brow && rcol>=lcol){
            for(int i = lcol ; i<=rcol ; i++){
                ans.emplace_back(matrix[trow][i]);
            }
            trow++;
            for(int i = trow ; i<=brow ; i++){
                ans.emplace_back(matrix[i][rcol]);
            }
            rcol--;
            if(trow<=brow){
            for(int i = rcol ; i>=lcol ; i--){
                ans.emplace_back(matrix[brow][i]);
            }
            brow--;
            }
            if(lcol<=rcol){
            for(int i = brow ; i>=trow; i--){
                ans.emplace_back(matrix[i][lcol]);
            }
            lcol++;
            }
        }
        return ans;
    }
};