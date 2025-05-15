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
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(root == NULL){
            return {};
        }
        vector<int> res;
        stack<TreeNode *> s;
        TreeNode *curr = root;
        while(!s.empty() || curr != NULL){
            while(curr != NULL){
                s.push(curr);
                curr = curr->left;
            }
            TreeNode *x = s.top();
            s.pop();
            res.push_back(x->val);
            curr = x->right;
        }
        return res;
    }
};