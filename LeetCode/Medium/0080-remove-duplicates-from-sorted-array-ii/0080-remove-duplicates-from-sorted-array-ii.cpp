class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        for(int i = 0 ; i < nums.size() ;){
            int idx = nums[i], count = 0, place = i;
            while(i<nums.size() && nums[i] == idx){
                count++;
                i++;
            }
            if(count==2){
                nums[place] = idx, nums[place+1] = idx;
            }
            else if (count>2){
                int spare = count-2;
                nums.erase(nums.begin()+place+2,nums.begin()+place+2+spare);
                i=place+2;
            }
            else nums[place] = idx; 
        }
        return nums.size();
    }
};