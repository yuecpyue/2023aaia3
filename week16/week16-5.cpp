//week16-5.cpp leetcode學習計畫94. Binary Tree Inorder Traversal
class Solution {
public:
    void helper(TreeNode* root,vector<int>& ans){
        if(root==nullptr) return;

        helper(root->left,ans);//左
        ans.push_back(root->val);//中
        helper(root->right,ans);//右
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;

        helper(root,ans);

        return ans;
    }
};