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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode *a = root, *b = NULL;
        while(a){
            b = a;
            if(val < a->val){
                a = a->left;
            }
            else{
                a = a->right;
            }
        }
        if(val < b->val){
            b->left = new TreeNode(val);
        }
        else{
            b->right = new TreeNode(val);
        }
        return root;
    }
};