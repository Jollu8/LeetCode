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
    vector<vector<int>> zigzagLevelOrder(TreeNode* r) {
        vector<vector<int>> ans;
        if(!r) return ans;
        vector<int> row;
        queue<TreeNode*> q;
        int x{};
        q.push(r);
        while(!q.empty()) {
            int size = q.size();
            for(int i = 0; i < size; ++i) {
                auto cur = q.front();
                q.pop();
                row.push_back(cur->val);
                if(cur->left)q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
            if(!(x&1)) ans.emplace_back(move(row));
            else {
                reverse(row.begin(), row.end());
                ans.emplace_back(move(row));
            }
            ++x;
        }
        return ans;
    }
};