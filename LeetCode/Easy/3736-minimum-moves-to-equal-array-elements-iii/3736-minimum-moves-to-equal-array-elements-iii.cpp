class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mac = INT_MIN;
        for(int i = 0 ; i < nums.size() ; i++){
            mac = max(mac,nums[i]);
        }
        int counter = 0;    
        for(int i = 0 ; i<nums.size() ; i++){
            counter+=abs(mac-nums[i]);
        }
        return counter;
    }
};