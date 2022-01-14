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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {

        if (headA == NULL && headB == NULL) { return NULL; }

        ListNode* p = headA, * q = headB;
        int len1 = 0, len2 = 0;
        int diff;
        while (p != NULL) {
            len1++;
            p = p->next;

        }
        while (q != NULL) {
            len2++;
            q = q->next;

        }
        diff = len1 - len2;

        if (diff > 0) {
            while (diff != 0) {
                headA = headA->next;
                diff--;

            }

        }

        if (diff < 0) {
            while (diff != 0) {
                headB = headB->next;
                diff++;

            }

        }

        while (headA) {
            if (headA == headB) { return headA; }
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};
/*
Runtime: 40 ms, faster than 88.28% of C++ online submissions for Intersection of Two Linked Lists.
Memory Usage: 14.6 MB, less than 30.51% of C++ online submissions for Intersection of Two Linked Lists.
*/