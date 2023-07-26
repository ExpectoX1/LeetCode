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
    int height(TreeNode* root) {
        if (root == NULL) return 0;
        int l = height(root->left);
        int r = height(root->right);
        return max(l, r) + 1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == NULL) return 0;
        int l_height = height(root->left);
        int r_height = height(root->right);
        int l_diameter = diameterOfBinaryTree(root->left);
        int r_diameter = diameterOfBinaryTree(root->right);
        
        return max({l_height + r_height, l_diameter, r_diameter});
    }
};
