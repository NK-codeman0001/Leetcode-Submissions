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
    void utilAns(TreeNode* Node, vector <int>& arr){
        if(Node){
            utilAns(Node->left, arr);
            arr.push_back(Node->val);
            utilAns(Node->right, arr);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector <int> ans;
        utilAns(root,ans);
        return ans;
    }
};