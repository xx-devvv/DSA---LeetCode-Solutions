class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = -1, n = nums.size();
        for(int i = n-1 ; i > 0; i--){
            if(nums[i] > nums[i-1]) {
                pivot = i-1;
                break;
                }
        }
        int left,right;
        if(pivot == -1){
            reverse(nums.begin(), nums.end());
            return;
        }
        int t = n-1;
        while(nums[pivot]>=nums[t]){
            t--;
        }
        swap(nums[pivot],nums[t]);
        reverse(nums.begin()+pivot+1, nums.end());
    }
};