/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *h) {
        if(!h || !h->next || !h->next->next) return nullptr;
        if(!h) return h;
        auto slow = h;
        auto fast = h;
        while(fast->next && fast->next->next) {
            fast = fast->next->next;
            slow = slow->next;
            if(slow == fast) break;
        }
        if(slow != fast) return nullptr;
        slow = h;
        while(slow != fast) {
            fast = fast->next;;
            slow = slow->next;
        }
        return slow;
    }
};