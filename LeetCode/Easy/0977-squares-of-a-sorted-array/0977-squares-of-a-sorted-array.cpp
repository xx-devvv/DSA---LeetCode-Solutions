class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans;
        
        for(int i = 0 ; i < n ; i++){
            nums[i] *= nums[i];
        }
        int pivot  = 0;

        for(int i = 1 ; i < n ; i++){
            if(nums[i] < nums[pivot]) pivot = i;
        }
      
        int left = pivot - 1, right  = pivot + 1;
        ans.emplace_back(nums[pivot]);
        while(left >= 0 && right < n){
            if(nums[left] <= nums[right] ) {
                ans.emplace_back(nums[left]);
                left--;
            }
            else{
                ans.emplace_back(nums[right]);
                right++;
            }
        }

            while(left >= 0){
            ans.push_back(nums[left]);
            left--;
        }

        while(right < n){
        ans.push_back(nums[right]);
        right++;
}
        return ans;        

    }
};