/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>buf;
        for(auto &i : lists) {
            auto cur = i;
            while(cur) {
                buf.push_back(cur->val);
                cur = cur->next;
            }
        }

        auto ans = new ListNode(0);
        sort(buf.begin(), buf.end());

        auto tmp = ans;
        for(auto i : buf) {
            tmp->next = new ListNode(i);
            tmp = tmp->next;
        }
        return ans->next;
        
    }
};