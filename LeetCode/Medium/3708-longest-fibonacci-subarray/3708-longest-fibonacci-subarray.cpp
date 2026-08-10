class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans = 2;
        for (int i = nums.size()-1; i>=2 ; i--){
            int mfib = 2;
            while(i>=2 && nums[i] == (nums[i-1]+nums[i-2])){
                mfib++;
                i--;
            }
            ans = max(ans,mfib);
        }
        return ans;
    }
};