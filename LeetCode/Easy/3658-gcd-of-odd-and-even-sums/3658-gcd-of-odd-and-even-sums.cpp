class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = n*(1 + (n-1)) , sumEven = n*(2 + (n-1));
        while((sumOdd || sumEven) != 0){
            if(sumOdd>sumEven) sumOdd = sumOdd % sumEven;
            else sumEven = sumEven % sumOdd ;

            if(sumOdd == 0) return sumEven;
            if(sumEven == 0) return sumOdd;
        }
        return -1;
    } 
};