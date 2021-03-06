///// @Jollu
// 2. Add Two Numbers
//You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
//
//You may assume the two numbers do not contain any leading zero, except the number 0 itself.
//
//
//
//Example 1:
//
//
//Input: l1 = [2,4,3], l2 = [5,6,4]
//Output: [7,0,8]
//Explanation: 342 + 465 = 807.

#include <iostream>
#include <vector>
#include <algorithm>


struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *dummy = new ListNode();
        ListNode *temp = dummy;
        int carry = 0;
        while (l1 != NULL or l2 != NULL or carry != 0) {
            int sum = 0;
            if (l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }
            if (carry != 0) {
                sum += carry;
            }
            carry = sum / 10;
            //new carry
            ListNode *oo = new ListNode(sum % 10);
            temp->next = oo;
            temp = temp->next;
        }
        return dummy->next;

    }
};


int main() {
    std::vector<int> vec{7, 9, 1, 5, 8, 1, 8, 3, 7, 3};
//    selectionSorting(vec, [](auto &a, auto &b) { return a < b; });

    std::cout << "After Sorted: [";
    std::for_each(vec.begin(), vec.end(), [](auto &i) { std::cout << i << ","; });
    std::cout << "]";
}