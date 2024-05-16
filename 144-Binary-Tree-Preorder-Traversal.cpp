class Solution {
public:
    void preorderTraversal(TreeNode* node, vector<int>& v) {
        if (node) {
            v.push_back(node->val); // Visit the current node
            preorderTraversal(node->left, v); // Traverse left subtree
            preorderTraversal(node->right, v); // Traverse right subtree
        }
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        preorderTraversal(root, v);
        return v;
    }
};
