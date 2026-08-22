int spofD(int n){
    int sum = 0;
    long long prod = 1;
    while(n>0){
        sum += n%10;
        prod *= n%10;
        n/=10;
    }
    return (sum + prod);
}

class Solution {
public:
    bool checkDivisibility(int n) {
        if ((n % spofD(n)) == 0) return true;
        return false;
    }

};