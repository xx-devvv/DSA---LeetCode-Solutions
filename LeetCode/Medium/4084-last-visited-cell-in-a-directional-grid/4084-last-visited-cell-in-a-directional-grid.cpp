class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        vector<int> ans(2);
        int r = grid.size();
        int c = grid[0].size();
        int i = 0, j = 0;

        set<pair<int, int>> visited;

        while (i < r && j < c) {
            if (visited.count({i, j})) {
                return ans;
            }
            visited.insert({i, j});
            ans[0] = i;
            ans[1] = j;

            if (grid[i][j] == 'L') {
                j = j - 1;
                if (j < 0) {
                    return ans;
                }
            }
            else if (grid[i][j] == 'R') {
                j = j + 1;
                if (j >= c) {
                    return ans;
                }
            }
            else if (grid[i][j] == 'U') {
                i = i - 1;
                if (i < 0) {
                    return ans;
                }
            }
            else if (grid[i][j] == 'D') {
                i = i + 1;
                if (i >= r) {
                    return ans;
                }
            }
        }

        return ans;
    }
};