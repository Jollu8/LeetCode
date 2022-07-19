///// @Jollu
// 19. Remove Nth Node From End of List


#include <unordered_map>


using namespace std;


struct ListNode {
     int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    explicit ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:

    ListNode *removeNthFromEnd(ListNode *head, int n) {
        auto *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *quick = dummy, *slow = dummy;
        while (n-- >= 0) {
            quick = quick->next;
        }
        while (quick) {
            slow = slow->next;
            quick = quick->next;
        }
        slow->next = (slow->next)->next;
        return dummy->next;
    }

};

int main() {


}