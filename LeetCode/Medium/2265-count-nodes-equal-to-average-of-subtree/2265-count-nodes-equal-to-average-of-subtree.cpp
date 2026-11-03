
class Solution {
public:

    void inorderarr(TreeNode* temp, vector<int>& ans) {
        if(temp == nullptr) return;
        inorderarr(temp->left, ans);
        int sum = 0, nodes = 0;
        vector<int> v;

        function<void(TreeNode*)> calc = [&](TreeNode* t) {
            if(t == nullptr) return;

            sum += t->val;
            nodes++;

            calc(t->left);
            calc(t->right);
        };

        calc(temp);

        ans.push_back(sum / nodes);

        inorderarr(temp->right, ans);
    }

    void inorderfind(TreeNode* temp, vector<int>& ans, int &i, int &count) {
        if(temp == nullptr) return;

        inorderfind(temp->left, ans, i, count);

        if(temp->val == ans[i]) count++;
        i++;

        inorderfind(temp->right, ans, i, count);
    }

    int averageOfSubtree(TreeNode* root) {
        vector<int> ans;

        inorderarr(root, ans);

        int count = 0, i = 0;

        inorderfind(root, ans, i, count);

        return count;
    }
};
