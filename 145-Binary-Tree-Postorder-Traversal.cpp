class Solution {
public:
    void postorderTraversal(TreeNode* node, vector<int>& v) {
        if (node) {
            postorderTraversal(node->left, v);
            postorderTraversal(node->right, v);
            v.push_back(node->val);
        }
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        postorderTraversal(root, v);
        return v;
    }
};
