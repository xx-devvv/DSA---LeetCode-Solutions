class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;
        }
        sort(nums.begin(),nums.end());
        vector<int> ans;
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        for(int i = 0 ; i < nums.size() ; i++){
            if (mp[nums[i]] == 2){
                ans.push_back(nums[i]);
            }
        }
        if (ans.empty()) return 0;
        int x = ans[0];
        for(int i = 1 ; i < ans.size() ; i++){
            x^=ans[i];
        }

        return x;
    }
};