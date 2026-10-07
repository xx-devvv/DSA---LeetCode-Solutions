class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
      int n = grid.size();
      vector<int> numbers;
      vector<int>ans(2);
      for(int i = 0 ; i < grid.size() ; i++){
        for(int j  = 0 ; j<grid[0].size() ; j++){
            numbers.push_back(grid[i][j]);
        }
      }
        sort(numbers.begin(), numbers.end());
        int sum = 0;
        for(int i = 0 ; i<numbers.size() - 1; i++){

                if(numbers[i+1] == numbers [i]) ans[0] = numbers[i];              
        sum+= numbers[i];
        }    
        sum+=numbers[numbers.size() - 1];
        ans[1] = ((n*n)*(n*n + 1) / 2) -  (sum - ans[0]);
        return ans;
    }
};