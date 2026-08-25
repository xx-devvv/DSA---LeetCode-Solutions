class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int, bool> mp;
        for(int i = 0 ; i<nums.size() ; i++){
            mp[nums[i]] = true;
        }
        int m = 1;
        int k2 = k;
        while(true){
            if (mp[k]){
                k = k2*(++m);
            }
            else{
                return k;
            }
        }
        return -1;
    }
};