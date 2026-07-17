class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans;
        int i = 0;
        for(; i < nums1.size() ; i++){
            ans.emplace_back(nums1[i]);
        }
        for( int j = 0 ; i < nums1.size() + nums2.size() ; i++, j++){
            ans.push_back(nums2[j]);
        }
        sort(ans.begin(),ans.end());
        int n = ans.size();
        if(n%2 == 1) return ans[(n-1)/2];
        else return ((ans[(n/2) - 1] + ans[n/2])/2.0);
    }
};