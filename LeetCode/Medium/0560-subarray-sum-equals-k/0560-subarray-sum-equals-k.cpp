class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    vector<int>ps(nums.size());
    ps[0]=nums[0];
    for(int i = 1 ; i<nums.size() ; i++){
    ps[i] = ps[i-1]+nums[i];
    }
    int count = 0;
    unordered_map<int,int> mp;
    for(int j = 0 ; j < nums.size() ; j++){
        int need = ps[j]-k;
        if(k == ps[j]) count++;
        if(mp.find(need)!=mp.end()) count+=mp[need];
        mp[ps[j]]++;
    }
    return count;    
    }
};