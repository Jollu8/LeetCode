class Solution {
public:
    bool isValidBST(TreeNode* root, TreeNode*l = {}, TreeNode*r = {}) {
        if(!root) return true;
        if(l && l->val >= root->val || r && r->val <= root->val) return false;
        return isValidBST(root->left,l ,root) && isValidBST(root->right, root, r);
    }
};
