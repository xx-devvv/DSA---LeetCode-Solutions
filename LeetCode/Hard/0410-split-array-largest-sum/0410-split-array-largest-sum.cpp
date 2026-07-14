class Solution {
public:
    bool isValid(vector<int>& nums, int k, int maxSum) {
        int subarrays = 1;
        int currSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > maxSum)
                return false;

            if (currSum + nums[i] <= maxSum) {
                currSum += nums[i];
            } else {
                subarrays++;
                currSum = nums[i];
            }
        }

        return subarrays <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }

        int ans = -1;
        int st = 0, end = sum;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (isValid(nums, k, mid)) {
                ans = mid;
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }

        return ans;
    }
};