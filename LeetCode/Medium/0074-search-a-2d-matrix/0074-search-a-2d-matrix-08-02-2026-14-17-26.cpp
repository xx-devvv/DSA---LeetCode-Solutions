bool binsearch(vector<vector<int>>& matrix, int start, int end, int target, int mid){
    while(start<=end){
    int midc = start + (end-start)/2;
    if(matrix[mid][midc] == target) return true;
    else if (matrix[mid][midc]<target) start = midc+1;
    else if (matrix [mid][midc]>target) end = midc-1;
    }
    return false; 
};
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int st = 0, end = matrix.size()-1, n = matrix[0].size()-1;
        while(st<=end){
            int mid = st + (end-st)/2;
            if(matrix[mid][0]<= target && target<=matrix[mid][n]){
               return binsearch(matrix, 0, n, target, mid);
            }
            else if(matrix[mid][n] < target) st=mid+1;
            else end = mid-1;
        }
        return false;
    }
};