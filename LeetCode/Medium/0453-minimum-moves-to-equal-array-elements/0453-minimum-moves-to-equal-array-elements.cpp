class Solution {
public:
    int minMoves(vector<int>& nums) {
        int req = 0;
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i<nums.size() ; i++){
            req+=(nums[i]-nums[0]);
        }
        return req;
    }
};