/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(nt x, ListNode *next) : val(x), next(next) {}
 * };i
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* newNext = reverseList(head->next);
        ListNode* fornt = head->next;
        fornt->next = head;
        head->next = NULL;
        return newNext;
    }
};
