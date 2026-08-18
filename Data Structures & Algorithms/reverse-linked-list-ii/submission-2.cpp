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
    ListNode* reverse(ListNode* head){
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp){
           ListNode* tempNext = temp->next;
           temp->next = prev;
           prev = temp;
           temp =  tempNext; 
        }
        return prev;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
       ListNode* temp = head;

    ListNode* startList = head;
    ListNode* middleList = NULL;
    ListNode* endList = NULL;

    // Find left position
    for(int i = 1; i < left; i++) {
        temp = temp->next;
    }

    middleList = temp;

    // Find right position
    for(int i = left; i < right; i++) {
        temp = temp->next;
    }

    // Store end list
    endList = temp->next;

    // Break start and middle
    ListNode* startEnd = NULL;

    if(left > 1) {
        startEnd = head;

        for(int i = 1; i < left - 1; i++) {
            startEnd = startEnd->next;
        }

        startEnd->next = NULL;
    }

    // Break middle and end
    temp->next = NULL;
    // Reverse middle
    ListNode* newMiddleHead = reverse(middleList);

    // Reconnect lists
    if(left > 1) {
        startEnd->next = newMiddleHead;
        middleList->next = endList;
    }
    else {
        head = newMiddleHead;
        middleList->next = endList;
    }
    return head;
    }
};