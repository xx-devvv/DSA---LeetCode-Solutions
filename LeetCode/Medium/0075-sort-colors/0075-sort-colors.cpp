class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros =count(nums.begin(), nums.end(), 0);
        int ones =count(nums.begin(), nums.end(), 1);
        int twos =count(nums.begin(), nums.end(), 2);
        for(int  i = 0 ; i < zeros ; i++){
            nums[i] = 0;
        }
        for( int j = zeros ; j < zeros + ones ; j++){
            nums[j] = 1;
        }
        for(int k = zeros + ones ; k < zeros + ones + twos ; k++){
            nums[k] = 2;
        }
    }
};