
class Solution {
    using TR = TreeNode*;
public:
    bool isValidBST(TR root, TR l = {}, TR r = {}) {
        if(!root) return true;
        if(l && l->val >= root->val || r && r->val <= root->val)return false;
        return isValidBST(root->left, l, root ) && isValidBST(root->right, root, r);
    }
};