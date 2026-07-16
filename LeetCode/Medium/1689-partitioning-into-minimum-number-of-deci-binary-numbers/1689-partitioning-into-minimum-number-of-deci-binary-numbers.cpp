class Solution {
public:
    int minPartitions(string num) {
        int maxs = num[0];
        for(int i = 0 ; i < num.size() ; i++){
            if(maxs<num[i]) maxs=num[i];
            if (maxs == '9') return 9;
        }
        return maxs-48;

    }
};