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
    // vector<int> v;

    // vector<int> rec_post(Node* root) {
    //     if (!root)
    //         return v;
    //     for (auto child : root->children) {
    //         postorder(child);
    //     }
    //     v.push_back(root->val);
    //     return v;
    // }

public:
     vector<int> postorder(Node *root) {
        vector<int> ans;
        if (!root)
            return ans;
        stack<Node *> st;
        st.push(root);
        Node *last = nullptr;
        while (!st.empty()) {
            auto tmp = st.top();
            auto &ch =  tmp->children;
            if (!ch.empty() && last != ch.back()){
                for (int i = ch.size()-1; i >= 0; --i)
                    st.push(ch[i]);
            }else {
                ans.push_back(tmp->val);
                last = tmp;
                st.pop();
            }
        }
        return ans;
     }
};