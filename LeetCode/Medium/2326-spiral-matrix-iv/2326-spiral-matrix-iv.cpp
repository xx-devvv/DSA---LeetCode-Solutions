
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {

        vector<vector<int>> ans(m, vector<int>(n, -1));

        ListNode* temp = head;

        int top = 0, bottom = m-1;
        int left = 0, right = n-1;

        while (top <= bottom && left <= right) {

            for (int i = left; i <= right; i++) {
                int v = -1;
                if (temp != NULL) {
                    v = temp->val;
                    temp = temp->next;
                }
                ans[top][i] = v;
            }
            top++;

            for (int i = top; i <= bottom; i++) {
                int v = -1;
                if (temp != NULL) {
                    v = temp->val;
                    temp = temp->next;
                }
                ans[i][right] = v;
            }
            right--;

            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    int v = -1;
                    if (temp != NULL) {
                        v = temp->val;
                        temp = temp->next;
                    }
                    ans[bottom][i] = v;
                }
                bottom--;
            }

            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    int v = -1;
                    if (temp != NULL) {
                        v = temp->val;
                        temp = temp->next;
                    }
                    ans[i][left] = v;
                }
                left++;
            }
        }

        return ans;
    }
};
