class Solution {
public:
    int countDaysTogether(string aa, string la, string ab, string lb) {
        vector<int> m = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        vector<int> M;
        int sum = 0;

        for (int i = 0; i < m.size(); i++) {
            sum += m[i];
            M.push_back(sum);
        }

        int aami = stoi(aa.substr(0, 2));
        int aadi = stoi(aa.substr(3, 2));

        int almi = stoi(la.substr(0, 2));
        int aldi = stoi(la.substr(3, 2));

        int abmi = stoi(ab.substr(0, 2));
        int abdi = stoi(ab.substr(3, 2));

        int blmi = stoi(lb.substr(0, 2));
        int bldi = stoi(lb.substr(3, 2));

        int alicearr = M[aami - 1] + aadi - m[aami - 1];
        int alicego  = M[almi - 1] + aldi - m[almi - 1];

        int bobarr = M[abmi - 1] + abdi - m[abmi - 1];
        int bobgo  = M[blmi - 1] + bldi - m[blmi - 1];

        int start = max(alicearr, bobarr);
        int end = min(alicego, bobgo);

        if (start > end)
            return 0;

        return end - start + 1;
    }
};