class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(nums.back()<0 || nums.front()>=0){
            return nums[n-1]*nums[n-2]*nums[n-3];
        }
        else{
            return max(nums[0]*nums[1]*nums[n-1],nums[n-1]*nums[n-2]*nums[n-3]);
        }
        return -1;
    }
};