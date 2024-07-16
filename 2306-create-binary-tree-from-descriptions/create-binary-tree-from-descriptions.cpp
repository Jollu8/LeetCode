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
    TreeNode* solve(int rootVal, unordered_map<int,pair<int,int>> &m){
        if(rootVal == 0){
            return NULL;
        }

        TreeNode* root = new TreeNode(rootVal);
        if(m.find(rootVal) == m.end()){
            root -> left = solve(0,m);
            root -> right = solve(0,m);
        }
        else{
            int leftVal = m[rootVal].first;
            int rightVal = m[rootVal].second;

            root -> left = solve(leftVal,m);
            root -> right = solve(rightVal,m);

        }
        return root;
    }

    TreeNode* createBinaryTree(vector<vector<int>>& arr) {
        // create map to store root with its child
        // also to find root (which is not child of any node) -> create set
        unordered_map<int, pair<int,int>> m;
        unordered_set<int> s;
        for(auto &x : arr){
            s.insert(x[1]);
            if(x[2] == 1){
                m[x[0]].first = x[1];
            }
            else{
                m[x[0]].second = x[1];
            }
        }

        // calculate root -> which is not child of any node
        int rootVal = 0;
        for(auto &x : m){
            if(s.find(x.first) == s.end()){
                rootVal = x.first;
                break;
            }
        }

        TreeNode* root = solve(rootVal, m);

        return root;
    }
};