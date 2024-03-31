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
    int ans=0;
    int height(TreeNode* node){
        if(node==NULL) return 0;
        return 1+ max(height(node->left), height(node->right));
    }    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        TreeNode* node=root;
        ans=max(ans,height(node->left)+height(node->right));
        diameterOfBinaryTree(node->left);
        diameterOfBinaryTree(node->right);
        return ans;
    
        }
};