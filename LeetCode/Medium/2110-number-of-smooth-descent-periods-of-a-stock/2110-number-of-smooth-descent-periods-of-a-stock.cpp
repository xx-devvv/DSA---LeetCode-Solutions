
class Solution {
public:
    long long ans(int n){
        if (n==1) return 1;
        return n + ans(n-1);
    }
    long long getDescentPeriods(vector<int>& prices) {
        int count = 1;
        long long total =0;
        for(int i = 0 ; i <prices.size() ; i++){
            count = 1;
            while(i<prices.size() - 1 && prices[i]-prices[i+1] == 1){
                count++;
                i++;
            }
            total+=ans(count);
        }
        return total;
    }
};