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
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;

    }
};
/*
Runtime: 12 ms, faster than 82.46% of C++ online submissions for Delete Node in a Linked List.
Memory Usage: 7.4 MB, less than 99.84% of C++ online submissions for Delete Node in a Linked List.
*/