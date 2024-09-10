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
    int gcd(int a, int b) {
    while (b != 0) {
        int temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}

public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head->next) return head;
        auto ans = new ListNode(head->val);

        queue<ListNode*> q;
        head = head->next;
        while(head) {
            q.push(head);
            head = head->next;
        }
        auto tmp = ans;
        while(!q.empty()) {
            auto curr = q.front();
            q.pop();

            int g = gcd(curr->val,tmp->val);
            tmp->next = new ListNode(g);
            tmp->next->next = curr;
            tmp = tmp->next->next;

        }
        return ans;
    }
};