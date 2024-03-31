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
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* ans = root;
        if(root==NULL) return NULL;
        if(ans->left && ans->left->val == val ) return ans->left;
        else if(ans->right && ans->right->val == val) return ans->right;
            searchBST(ans->left,val);
            searchBST(ans->right,val);
        return NULL;
    }
};