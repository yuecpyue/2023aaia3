//week14-4.cpp leetcode 104. Maximum Depth of Binary Tree
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr) return 0;
        return 1+max(maxDepth(root->left),maxDepth(root->right)); 
    }
};