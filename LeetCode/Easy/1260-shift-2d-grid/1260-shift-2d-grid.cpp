class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int N = m * n;
        k %= N;

        vector<int> flat;
        flat.reserve(N);
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                flat.push_back(grid[i][j]);

        vector<int> rotated(N);
        for (int i = 0; i < N; i++) {
            int newIdx = (i + k) % N;  
            rotated[newIdx] = flat[i];
        }

        vector<vector<int>> matrix(m, vector<int>(n));
        for (int i = 0; i < N; i++) {
            matrix[i / n][i % n] = rotated[i];
        }
        return matrix;
    }
};
