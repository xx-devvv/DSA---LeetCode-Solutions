int m;

bool cmp(int a, int b) {
    if(abs(a-m) == abs(b-m))
        return a > b;

    return abs(a-m) > abs(b-m);
}

class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());

        m = arr[(arr.size()-1)/2];

        sort(arr.begin(), arr.end(), cmp);

        return vector<int>(arr.begin(), arr.begin()+k);
    }
};