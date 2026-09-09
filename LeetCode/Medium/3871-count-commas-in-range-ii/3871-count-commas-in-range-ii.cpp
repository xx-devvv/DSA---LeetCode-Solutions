class Solution {
public:

    long long countCommas(long long n) {

        long long count = 0;
        if (n== 1000000000000000) count++;
        if(n >= pow(10,12)){
            count += (n - pow(10,12) + 1) * 4;
            n = pow(10,12) - 1;
        }

        if(n >= pow(10,9)){
            count += (n - pow(10,9) + 1) * 3;
            n = pow(10,9) - 1;
        }

        if(n >= pow(10,6)){
            count += (n - pow(10,6) + 1) * 2;
            n = pow(10,6) - 1;
        }

        if(n >= pow(10,3)){
            count += n - pow(10,3) + 1;
            n = pow(10,3) - 1;
        }

        return count;
    }
};