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
    int ans=INT_MAX,preVal=-1;
public:
    void help(TreeNode* root)
    {
        if(root==NULL) return;
        help(root->left);
        if(preVal!=-1){
            ans=min(ans,abs(root->val - preVal));
        }
        preVal=root->val;
        help(root->right);
    }
    int minDiffInBST(TreeNode* root) {
        if(root){
            help(root);
    }
        return ans;
    }
};