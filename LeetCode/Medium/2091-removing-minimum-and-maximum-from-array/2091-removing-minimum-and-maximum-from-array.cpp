int smallest(vector<int>& nums) {
    int smallest = INT_MAX;

    for (int i = 0; i < nums.size(); i++) {
        smallest = min(smallest, nums[i]);
    }

    return smallest;
}

int biggest(vector<int>& nums) {
    int biggest = INT_MIN;

    for (int i = 0; i < nums.size(); i++) {
        biggest = max(biggest, nums[i]);
    }

    return biggest;
}

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        int s = smallest(nums);
        int b = biggest(nums);

        int ids, idl;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == s) {
                ids = i;
                break;
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == b) {
                idl = i;
                break;
            }
        }

        int left = min(ids, idl);
        int right = max(ids, idl);

        int removeLeft = right + 1;

        int removeRight = nums.size() - left;

        int removeBoth =
            (left + 1) + (nums.size() - right);

        return min(removeLeft, min(removeRight, removeBoth));
    }
};