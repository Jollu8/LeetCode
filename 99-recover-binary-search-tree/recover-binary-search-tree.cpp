class Solution {
    vector<TreeNode*> p;

    void dfs(TreeNode *r) {
        if (!r) return;
        dfs(r->left);
        if (p[0] && p[0]->val > r->val) {
            if (!p[1]) p[1] = p[0];
            p[2] = r;
        }
        p[0] = r;
        dfs(r->right);
    }

public:
    Solution() : p( vector<TreeNode*>(3, nullptr)){}
    void recoverTree(TreeNode *r) {
        dfs(r);
        if(p[1] && p[2])
            swap(p[1]->val, p[2]->val);
    }
};