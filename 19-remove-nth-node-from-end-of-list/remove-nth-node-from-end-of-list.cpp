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
    ListNode* removeNthFromEnd(ListNode* h, int n) {
        auto ans = new ListNode(0);
        ans->next = h;
        int cnt{};
        auto cur = ans;
        while(cur){
            cur = cur->next;
            ++cnt;
        }

        auto tmp = ans;
        for(auto i = 0; i < cnt - n -1; ++i) {
            tmp = tmp->next;
        }
        tmp->next = tmp->next->next;
        return ans->next;
    }
};