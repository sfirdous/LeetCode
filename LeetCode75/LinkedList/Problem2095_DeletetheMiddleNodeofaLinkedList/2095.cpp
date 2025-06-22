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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head->next)
            return head->next;
       ListNode* tortoise = head; //slow pointer
       ListNode* hair = head;     //fast pointer
       ListNode* prev;            //to store prev of middle node
       while(hair->next && hair->next->next) //find the middle node
       {
        prev = tortoise;
        tortoise = tortoise->next;
        hair = hair->next->next;
       }
       if(hair->next)                      //check where exactly is the moddle node
       {
        prev = tortoise;
        tortoise = tortoise->next;
       }
       
        //delete middle node
       prev->next = tortoise->next;
       tortoise->next = NULL;

       return head;
    }
};