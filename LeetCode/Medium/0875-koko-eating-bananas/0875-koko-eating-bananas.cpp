class Solution {
public: 
    bool f(int n, vector<int>& piles, int h){
        long long time = 0;
        int i = 0;

        while(time <= h && i < piles.size()){
            time += (piles[i] + n - 1)/n;
            if(time > h){
                return false;
            }
            i++;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int high = 1e9, low = 1, ans = -1;
        while(high>=low){
            int mid = low + (high - low) / 2;
            if(f(mid, piles, h) == true){
                high = mid-1;
                ans = mid;
            }
            else if(f(mid, piles, h) == false){
                low = mid+1;
            }
        }
        return ans;
    }
};