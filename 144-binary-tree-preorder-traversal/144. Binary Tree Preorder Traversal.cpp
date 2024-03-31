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
    vector<int> preorderTraversal(TreeNode* root) {
        vector <int> ans;
        preoUtil(ans,root);
        return ans;
    }
    void preoUtil(vector<int>& arr, TreeNode* root){
        if(root==NULL) return;
        arr.push_back(root->val);
        preoUtil(arr,root->left);
        preoUtil(arr,root->right);
    }
};