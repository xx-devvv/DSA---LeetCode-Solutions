class Solution {
public:
    int integerBreak(int n) {
        int product = 1;
        if (n==2) return 1;
        if (n==3) return 2;
        while(n>0){
            if(n==4){
                product*=4;
                return product;
            }
            else if(n==2){
                product*=2;
                return product;
            }
            n-=3;
            product*=3;
        }
        return product;
    }
};