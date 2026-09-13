class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int left = 0;
        long long ans = 0;
        long long sum = 0;
        long long score =0;
        for(int right = 0; right<nums.size(); right++){
            sum+=(nums[right]);
            score= sum*(right-left+1);
            while(score>=k){
                sum-=nums[left];
                left++;
                score=sum*(right-left+1);
            }
            ans+=(right-left+1);
        }
        return ans;
    }
};