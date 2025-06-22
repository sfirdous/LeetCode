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
    ListNode* oddEvenList(ListNode* head) {
        vector<int> arr;
        ListNode* odd = head;
        if(!head)
            return NULL;
        ListNode* even = head->next;

        while(odd && odd->next)
        {
            arr.push_back(odd->val);
            odd= odd->next->next;
        }
        if(odd) arr.push_back(odd->val);

        while(even && even->next)
        {
            arr.push_back(even->val);
            even = even->next->next;
        }
        if(even) arr.push_back(even->val);

        int i = 0;
        ListNode* temp = head;
        while(temp)
        {
            temp->val = arr[i];
            temp = temp->next;
            i++;
        }
        return head;
    }
};