class Solution {
    
public:
    void recoverTree(TreeNode *root) {
        vector<TreeNode*> p(3, nullptr);
        function <void(TreeNode*)> inor = [&](TreeNode*r) {
            if(!r) return;
            inor(r->left);
            if(p[0] && p[0]->val > r->val){
                if(!p[1])p[1] = p[0];
                p[2] = r;
            }
            p[0] = r;
            inor(r->right);
        };
        inor(root);
        if(p[1] && p[2])
            swap(p[1]->val, p[2]->val);
    }
};