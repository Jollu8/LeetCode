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
    bool isPalindrome(ListNode *h) {
        ListNode *prev = nullptr, *slow = h, *fast = h;

        for (; fast && fast->next; fast = fast->next->next, slow = slow->next);
        while (slow) {
            swap(prev, slow->next);
            swap(slow, prev);
        }
        for (; prev && h; prev = prev->next, h = h->next)
            if (h->val != prev->val) return false;

        return true;
    }
};