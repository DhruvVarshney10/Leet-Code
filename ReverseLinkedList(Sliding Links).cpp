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
    ListNode* reverseList(ListNode* head) {
        ListNode* p, * q, * r, * first;
        p = head;
        q = NULL;
        r = NULL;
        while (p != NULL) {
            r = q;
            q = p;
            p = p->next;
            q->next = r;
        }

        return q;

    }
};
/*
Runtime: 9 ms, faster than 24.90% of C++ online submissions for Reverse Linked List.
Memory Usage: 8.3 MB, less than 78.67% of C++ online submissions for Reverse Linked List.

*/
