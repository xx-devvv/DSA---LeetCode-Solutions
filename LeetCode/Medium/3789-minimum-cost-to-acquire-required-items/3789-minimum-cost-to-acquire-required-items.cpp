class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costboth, int need1, int need2) {
        long long total = 0;

        if(need1 >= need2 && costboth <= cost1) {
        return 1LL * max(need1, need2) * costboth;
        }
        else if(need2 > need1 && costboth <= cost2) {
        return 1LL * max(need1, need2) * costboth;
        }
        else if(costboth <= cost1 + cost2) {
            total += 1LL * costboth * min(need1, need2);

            if(need1 >= need2) {
                total += 1LL * (need1 - need2) * cost1;
            }
            else {
                total += 1LL * (need2 - need1) * cost2;
            }

            return total;
        }
        else {
            total += 1LL * need1 * cost1 + 1LL * need2 * cost2;
            return total;
        }
    }
};