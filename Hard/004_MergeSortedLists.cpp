///// @Jollu
//23. Merge k Sorted Lists



#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>


using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        ListNode *ans = NULL;
        vector<int> vals;
        // add all nodes to vals
        for (auto node: lists) {
            while (node != NULL) {
                vals.push_back(node->val);
                node = node->next;
            }
        }
        // all empty linkedlists
        if (vals.size() == 0) {
            return ans;
        }
        // sort vals
        sort(vals.begin(), vals.end());
        // store vals in ans
        ans = new ListNode(vals.at(0));
        ListNode *it = ans;
        int len = vals.size();
        for (int i = 1; i < len; i++) {
            it->next = new ListNode(vals.at(i));
            it = it->next;
        }
        return ans;
    }
};

int main() {
    Solution s;
    std::string str("23");


}