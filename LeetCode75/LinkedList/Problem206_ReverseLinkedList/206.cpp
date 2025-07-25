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
        if( !head)
            return head;
        
        ListNode* curr = head->next;
        if(!curr)
            return head;
        ListNode* reverseNode = head;
        head->next = NULL;
        ListNode* nextNode = curr->next;
    
        while(nextNode)
        {
            curr->next = reverseNode;
            reverseNode = curr;
            curr = nextNode;
            nextNode = nextNode->next;
        }
        curr->next = reverseNode;

        return curr;
    }
};