//week16-4a.cpp leetcode學習計畫104. Maximum Depth of Binary Tree
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr) return 0;
        int ans1=maxDepth(root->left);
        int ans2=maxDepth(root->right);
        return max(ans1,ans2)+1;
    } 
};