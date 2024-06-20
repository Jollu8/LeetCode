class Solution {
public:
    bool findTarget(TreeNode *root, int k) {
        vector<int> buf;
        function<void(TreeNode *, vector<int> &)> func = [&func](TreeNode *root,
                                                                 vector<int> &b) {
            if (!root)
                return;
            func(root->left, b);
            b.push_back(root->val);
            func(root->right, b);
        };
        func(root, buf);
        int l{}, r = buf.size()-1;
        while(l < r) {
            int cur = buf[l] + buf[r];
            if(cur == k) return true;
            if(cur < k) ++l;
            else --r;
        }
        return false;
    }
};