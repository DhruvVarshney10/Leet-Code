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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) { return head; }

        ListNode* p = head;
        while (p && p->next) {
            if (p->next->val == val) {
                p->next = p->next->next;
            }
            else {
                p = p->next;
            }
        }

        if (head->val == val) { head = head->next; }
        return head;
    }
};
/*
Runtime: 40 ms, faster than 16.51% of C++ online submissions for Remove Linked List Elements.
Memory Usage: 15.1 MB, less than 45.95% of C++ online submissions for Remove Linked List Elements.
*/