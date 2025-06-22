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
    ListNode* swapPairs(ListNode* head) {
    //dummy node
    ListNode *dummy = new ListNode(0,head);

    //prev points to dummy and curr to head
    ListNode* prev = dummy;
    ListNode* curr = head;

    while(curr && curr->next)
    {
        //pointer to store the second node
        ListNode* temp = curr->next;

        //swap nodes
        curr->next =temp->next;
        temp->next = curr;
        prev->next = temp;

        //update pointers
        prev = curr;
        curr = curr->next;
    }
    return dummy->next;
    }
};