bool isPalindrome(string st){
    int left = 0 , right = st.size() -1;
    while(left<right){
        if(st[left] != st[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;
        for(int i = 0 ; i < s.size() ; i++){
            string st = "";
            for(int j = i ; j <s.size() ; j++){
                st += s[j];
            if(isPalindrome(st)){
                count++;
            }
            }
            
        } 
       return count;
    }
};