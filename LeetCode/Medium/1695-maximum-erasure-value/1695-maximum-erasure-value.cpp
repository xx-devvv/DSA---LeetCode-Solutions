class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {

        unordered_map<int, int> mp;

        int left = 0;
        int sum = 0;
        int ans = 0;

        for(int right = 0; right < nums.size(); right++) {

            while(mp[nums[right]] > 0) {
                mp[nums[left]]--;
                sum -= nums[left];
                left++;
            }

            mp[nums[right]]++;
            sum += nums[right];

            ans = max(ans, sum);
        }

        return ans;
    }
};