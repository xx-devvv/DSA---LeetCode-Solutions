class Solution {
public:
    bool search(int i , int j, vector<vector<int>> &grid){
        int m = grid.size();
        int n = grid[0].size();
        int r = i, c = j;
        for(int j1 = 0 ; j1<n ; j1++){
            if(grid[r][j1] == 1 && j1!=j) return true;
        }
        for(int i1 = 0 ; i1<m ; i1++){
            if(grid[i1][c] == 1 && i1!=i) return true;
        }
        return false;
    }
    int countServers(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        for(int i = 0; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(grid[i][j] == 1){
                    if(search(i,j,grid))count++;
                }
            }
        }
        return count;
    }
};