class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn = *min_element(nums.begin(),nums.end());
        int mx = *max_element(nums.begin(), nums.end());
        if (mx == mn) return mx;
        while(mn != 0 && mx !=0){
            if(mx>mn) mx = mx%mn;
            else if (mn>mx) mn = mn%mx;
        }
        if(mx == 0) return mn;
        else return mx;
        return -1;
    }
};