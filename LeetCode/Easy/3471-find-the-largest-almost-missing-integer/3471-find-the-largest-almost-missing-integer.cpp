class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        if (nums.size() == k){
        int cmax = INT_MIN;
        for(int i = 0 ; i<nums.size() ; i++){
            cmax = max(cmax, nums[i]);
        }
        return cmax;
        }
        for(int i = 0 ; i < nums.size()-k+1 ; i++){
         for(int j = i ; j < i+k ; j++){
           mp[nums[j]]++; 
        }
       }
       int lar = INT_MIN;
       for(int i = 0 ; i<nums.size() ; i++){
            if (mp[nums[i]] == 1){
                lar = max(lar, nums[i]);
            }
       }
       if (lar!= INT_MIN) return lar;
       return -1;
    }
};