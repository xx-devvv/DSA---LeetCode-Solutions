bool isEvendig(int n){
    int digits = 0;
    while(n>0){
        n/=10;
        digits++;
    }
    if (digits%2==0) return true;
    return false;
}

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(isEvendig(nums[i])) count++;
        }
        return count;
    }
};