
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int median = nums[nums.size()/2];

        int counter = 0;

        for(int i = 0; i < nums.size(); i++) {
            counter += abs(median - nums[i]);
        }

        return counter;
    }
};
