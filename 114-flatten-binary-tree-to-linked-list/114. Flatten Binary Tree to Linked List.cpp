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
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        TreeNode* node=root;
        while(node){
            if(node->left){
            TreeNode* tempL= node->left, *tempR=node->right;
            TreeNode* curr= tempL;
            while(curr->right) curr=curr->right;
            curr->right= node->right;
            node->left=NULL;
            node->right=tempL;
        }
        node=node->right;
        }
    }
};