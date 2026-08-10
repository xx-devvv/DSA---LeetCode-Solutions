class Solution {
public:
    string intToRoman(int num) {
        vector<int> no = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9 , 5, 4, 1};
        vector<string> sym = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X" , "IX", "V", "IV", "I"};
        string ans = "";
        for(int i = 0 ; i<no.size() ; i++){
            while(num>=no[i]){
                num-=no[i];
                ans+=sym[i];
            }
        }
        return ans;
    }
};