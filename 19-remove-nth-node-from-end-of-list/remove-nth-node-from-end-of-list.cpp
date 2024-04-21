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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
    auto *dummy = new ListNode(0);
        dummy->next = head;

        int count{};
        auto t = dummy;
        while (t) {
            ++count;
            t = t->next;
        }

        auto curr = dummy;;
        for (auto i = 0; i < count - n - 1; i++)
            curr = curr->next;
        curr->next = curr->next->next;

        return dummy->next;
    }
};