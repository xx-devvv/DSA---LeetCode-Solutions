class Solution {
public:
    int contains(int n, int d){
        int count = 0;
        while(n>0){
        int c = n%10;
        if(c == d){
            count++;
        }
        n/=10;
        }
        return count;
    }
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count = 0;
        for(int i = 0 ; i<nums.size() ; i++){
            count+=contains(nums[i], digit);
        }
        return count;
    }
};