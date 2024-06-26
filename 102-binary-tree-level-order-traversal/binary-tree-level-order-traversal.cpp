/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
    int height(TreeNode* r) {
        if (!r)
            return 0;
        return 1 + max(height(r->left), height(r->right));
    }

    void levels(TreeNode* r, int level, vector<int>& tmp) {
        if (!r)
            return;
        if (level == 1)
            tmp.push_back(r->val);
        else {
            levels(r->left, level - 1, tmp);
            levels(r->right, level - 1, tmp);
        }
    }
    vector<vector<int>> levelOrder_rec(TreeNode* r) {
        if (!r)
            return {};

        std::vector<std::vector<int>> ans;
        auto h = height(r);
        for (int i = 1; i <= h; i++) {
            vector<int> tmp;
            levels(r, i, tmp);
            ans.emplace_back(tmp);
        }
        return ans;
    }

public:
    vector<vector<int>> levelOrder(TreeNode* r){
        vector<vector<int>> ans;
        if(!r) return {};
        queue<TreeNode*> q;
        q.push(r);
        while(!q.empty()) {
            vector<int> buf;

            int size = q.size();
            for(int _ = 0; _ < size; ++_) {
                auto tmp = q.front();
                q.pop();
                buf.push_back(tmp->val);
                if(tmp->left)q.push(tmp->left);
                if(tmp->right)q.push(tmp->right);
            }
            ans.emplace_back(buf);
        }
        return ans;

    }
};