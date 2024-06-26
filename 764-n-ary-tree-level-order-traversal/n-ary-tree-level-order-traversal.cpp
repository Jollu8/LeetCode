/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(!root) return ans;

        queue<Node*> q;
        q.push(root);
        while(!q.empty()) {
            auto size = q.size();
            vector<int> buf;
            for(int i = 0; i < size; ++i) {
                auto tmp = q.front();
                q.pop();
                buf.push_back(tmp->val);
                for(auto &m : tmp->children) q.push(m);
            }
            ans.emplace_back(buf);
        }
        return ans;
    }
};