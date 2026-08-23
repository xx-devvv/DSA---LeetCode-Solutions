int sumofd(int n){
    int s = 0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}
class Solution {
public:
    int addDigits(int n) {
        bool isT = true;
        while(isT){
            int x = sumofd(n);
            if (x >= 10){
                n = x;
            }
            else{
                isT = false;
                return x;
            }
        }
        return -1;
    }
};