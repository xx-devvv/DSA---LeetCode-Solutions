class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        vector<int> arr;
        int total = 0;

        for(int i = 0; i + 1 < nums.size(); i++){
            arr.push_back(nums[i+1] - nums[i]);
        }

        for(int i = 0; i + 1 < arr.size(); i++){
            int count = 1;

            while(i + 1 < arr.size() && arr[i] == arr[i+1]){
                count++;
                i++;
            }

            if(count >= 2){
                total += count * (count - 1) / 2;
            }
        }

        return total;
    }
};