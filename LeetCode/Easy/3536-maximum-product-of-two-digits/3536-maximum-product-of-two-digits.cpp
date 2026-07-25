class Solution {
public:
    int maxProduct(int n) {
        int count = 0, digit;
        vector<int> nums;
        while(n>0){
            digit = n%10;
            n/=10;
            count++;
            nums.emplace_back(digit);
        }

        sort(nums.begin(), nums.end());
        
        return nums[count-1]*nums[count-2];

    }
};