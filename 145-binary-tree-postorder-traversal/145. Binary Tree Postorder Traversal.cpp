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
    vector<int> postorderTraversal(TreeNode* root) {
           vector <int> ans;
        posoUtil(ans,root);
        return ans;
    }
    void posoUtil(vector<int>& arr, TreeNode* root){
        if(root==NULL) return;
        posoUtil(arr,root->left);
        posoUtil(arr,root->right);
        arr.push_back(root->val);

    }
};