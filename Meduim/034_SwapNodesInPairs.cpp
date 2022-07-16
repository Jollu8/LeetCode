///// @Jollu
// 24. Swap Nodes in Pairs



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
    ListNode *swapPairs(ListNode *head) {
        ListNode *pre = new ListNode(0, head), *curr = pre;
        while (curr->next && curr->next->next) {
            ListNode *temp = curr->next;
            curr->next = curr->next->next;
            temp->next = temp->next->next;
            curr->next->next = temp;
            curr = temp;
        }
        return pre->next;

    }
};

int main() {
    Solution s;
    std::string str("23");


}