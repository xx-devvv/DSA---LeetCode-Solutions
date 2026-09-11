class Solution {
public:
    long long summ(int n){
        if (n==0) return 0;
        return n+summ(n-1);
    }
    long long zeroFilledSubarray(vector<int>& nums) {
        int count = 0;
        long long total = 0;
        for(int i = 0 ; i<nums.size() ; i++){
            count = 0;
            while(i<nums.size() && nums[i] == 0){
                count++;
                i++;
            }
            total+=summ(count);
        }
        return total;
    }
};