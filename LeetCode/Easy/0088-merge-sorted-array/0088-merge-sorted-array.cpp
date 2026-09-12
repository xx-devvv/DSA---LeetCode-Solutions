class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;

        int ind1 = 0;
        int ind2 = 0;

        while(ind1 < m && ind2 < n) {
            if(nums1[ind1] <= nums2[ind2]) {
                ans.push_back(nums1[ind1]);
                ind1++;
            }
            else {
                ans.push_back(nums2[ind2]);
                ind2++;
            }
        }

        while(ind1 < m) {
            ans.push_back(nums1[ind1]);
            ind1++;
        }

        while(ind2 < n) {
            ans.push_back(nums2[ind2]);
            ind2++;
        }

        nums1 = ans;
    }
};