class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        if(n == 1) return nums[0];

        vector<int> subsum;

        for(int i = 0; i < nums.size(); i++) {
            for(int j = i; j < nums.size(); j++) {

                int p = accumulate(nums.begin() + i, nums.begin() + j + 1, 0);
                subsum.push_back(p);
            }
        }

        sort(subsum.begin(), subsum.end());

        long long ans = accumulate(subsum.begin() + left - 1,subsum.begin() + right, 0LL);

        return ans % 1000000007;
    }
};