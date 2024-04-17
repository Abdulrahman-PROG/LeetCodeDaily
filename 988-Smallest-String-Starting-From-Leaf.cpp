class Solution {
    string answer = "~";
public:     
    void recure(TreeNode* root, string s){
        if (!root) return;
        
        // Concatenate current character to the beginning of the string
        s = char(root->val + 'a') + s;
        
        if (!root->left && !root->right){
            // Compare the current string with the answer and update if smaller
            answer = min(answer, s);
        }
        
        // Recur for left and right subtrees
        recure(root->left, s);
        recure(root->right, s);
    }
    
    string smallestFromLeaf(TreeNode* root) {
        recure(root, "");
        return answer;
    }
};
