int checkpos(int i, int s, int t, vector<int>& nums, int left, int right) {

    int best = s;

    while(left < right && s > t) {

        right--;

        if(left >= right)
            break;

        s = nums[i] + nums[left] + nums[right];

        if(abs(s - t) < abs(best - t))
            best = s;
    }

    return best;
}


int checkneg(int i, int s, int t, vector<int>& nums, int left, int right) {

    int best = s;

    while(left < right && s < t) {

        left++;

        if(left >= right)
            break;

        s = nums[i] + nums[left] + nums[right];

        if(abs(s - t) < abs(best - t))
            best = s;
    }

    return best;
}

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int t) {

        vector<int> sums;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size() - 2; i++) {

            int left = i + 1;
            int right = nums.size() - 1;

            while(left < right) {

                int s = nums[i] + nums[left] + nums[right];

                if(s == t)
                    return t;

                if(s > t) {

                    sums.push_back(
                        checkpos(i, s, t, nums, left, right)
                    );

                    right--;
                }
                else {

                    sums.push_back(
                        checkneg(i, s, t, nums, left, right)
                    );

                    left++;
                }
            }
        }

        int ans = sums[0];

        for(int x : sums) {
            if(abs(x - t) < abs(ans - t)) {
                ans = x;
            }
        }

        return ans;
    }
};