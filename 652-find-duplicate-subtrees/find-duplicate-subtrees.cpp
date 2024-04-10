class Solution {
public:
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        unordered_map<string, vector<TreeNode*>> map;
        traverse(root, map);
        vector<TreeNode*> result;
        for (auto entry : map) {
            vector<TreeNode*> nodes = entry.second;
            if (nodes.size() > 1) {
                result.push_back(nodes[0]);
            }
        }
        return result;
    }

    string traverse(TreeNode* node, unordered_map<string, vector<TreeNode*>>& map) {
        if (node == nullptr) {
            return "#";
        }
        string left = traverse(node->left, map);
        string right = traverse(node->right, map);
        string serialized = to_string(node->val) + "," + left + "," + right;
        vector<TreeNode*>& nodes = map[serialized];
        nodes.push_back(node);
        return serialized;
    }
};