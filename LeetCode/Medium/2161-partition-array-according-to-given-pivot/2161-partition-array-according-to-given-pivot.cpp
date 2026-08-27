class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int k) {
        vector<int> p;
        int c = count(nums.begin(),nums.end(), k);
        int n = nums.size();
        for(int i = 0 ; i<n ; i++){
            if(nums[i]<k){
                p.push_back(nums[i]);
            }
        }
        for(int i = 0; i<c ; i++){
            p.push_back(k);
        }
        for(int i = 0 ; i<n;i++){
            if(nums[i]>k){
                p.push_back(nums[i]);
            }
        }
        return p;
    }
};