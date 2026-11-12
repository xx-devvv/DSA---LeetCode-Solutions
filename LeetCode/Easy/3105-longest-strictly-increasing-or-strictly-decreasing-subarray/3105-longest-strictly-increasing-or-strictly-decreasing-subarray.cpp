class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxcount = 1;
        for(int i = 0 ; i<nums.size()-1 ; i++){
            int count = 1;
            while(i<nums.size()-1 && nums[i]<nums[i+1]){
                count++;
                i++;
            }
            maxcount = max(count,maxcount);
        }
        for(int i = 0 ; i<nums.size()-1 ; i++){
            int count = 1;
            while(i<nums.size()-1 && nums[i]>nums[i+1]){
                count++;
                i++;
            }
            maxcount = max(count,maxcount);
        }
        return maxcount;
    }
};