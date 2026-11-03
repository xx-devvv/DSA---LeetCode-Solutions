/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
void inorder(TreeNode *temp, vector<int>&ans){
    while(temp!=NULL){
        inorder(temp->left, ans);
        ans.push_back(temp->val);
        inorder(temp->right,ans);
        return;
    }
}
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root == nullptr) return ans;
        inorder(root, ans);
        
        return ans;
    }
};