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

// vector<int> preorder(Node* root) {
// if (!root)
//     return {};
// vector<int> ans;
// stack<Node*> stk;
// stk.push(root);

// while (!stk.empty()) {
//     auto tmp = stk.top();
//     ans.push_back(tmp->val);
//     stk.pop();

//     for (auto it = tmp->children.rbegin(); it != tmp->children.rend();
//          ++it)
//             stk.push(*it);
//     }
//     return ans;
// }

class Solution {
    void rec(Node *r, vector<int> &ans) {
        if(!r) return;
        ans.push_back(r->val);
        for(auto &i : r->children) rec(i, ans);
    }
public:
    vector<int> preorder(Node* root) {
        if (!root)
            return {};
        
        vector<int> ans;
        rec(root, ans);
        return ans;
    }
};