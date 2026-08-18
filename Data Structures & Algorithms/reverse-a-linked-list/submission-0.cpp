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
        ListNode* prev = NULL;
        ListNode* temp = head;
        while(temp){
            ListNode* newNext = temp->next;
            temp->next = prev;
            prev = temp;
            temp = newNext;
        }
        return prev;
    }
};
