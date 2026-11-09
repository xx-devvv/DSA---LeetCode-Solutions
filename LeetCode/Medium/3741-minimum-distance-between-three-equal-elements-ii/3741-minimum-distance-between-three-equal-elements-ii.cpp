class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int ans = INT_MAX;

        unordered_map<int, vector<int>> mp;

        for(int i = 0; i < nums.size(); i++) {

            mp[nums[i]].push_back(i);

            vector<int>& indices = mp[nums[i]];

            int n = indices.size();

            if(n >= 3) {

                int first = indices[n-3];
                int third = indices[n-1];

                ans = min(ans, 2 * (third-first));
            }
        }

        if(ans == INT_MAX) return -1;

        return ans;
    }
};