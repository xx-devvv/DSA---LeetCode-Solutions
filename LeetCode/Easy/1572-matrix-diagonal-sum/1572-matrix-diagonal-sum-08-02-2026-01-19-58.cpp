class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size(), sumd1 = 0,sumd2=0;
        if(n==1)return mat[0][0];
        for(int i=0; i < n ; i++){
            sumd1 += mat[i][i];
        }
        int i = 0, j=0;
        for(i=0, j=n-1; i>=0 && j>=0 && i<n && j<n && i+j == n-1 ; i++,j--){
            sumd2 += mat[i][j];
        }
        if(n%2==0) return sumd1+sumd2;
        return sumd1+sumd2-mat[n/2][(n)/2];
    }
};