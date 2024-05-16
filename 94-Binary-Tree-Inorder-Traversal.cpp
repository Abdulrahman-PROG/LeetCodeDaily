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
    void inorderTraversal(TreeNode* node, vector<int>& v) {
        if (node) {
            inorderTraversal(node->left, v);
            v.push_back(node->val);
            inorderTraversal(node->right, v);
        }
    }
    
    vector<int> inorderTraversal(TreeNode* node) {
        vector<int> v;
        inorderTraversal(node, v);
        return v;
    }
};