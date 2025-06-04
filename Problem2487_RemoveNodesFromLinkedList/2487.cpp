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
    ListNode* removeNodes(ListNode* head) {
        stack<int> s;
        ListNode* curr = head;
        while(curr)
        {
            while(!s.empty() &&curr->val > s.top())
                s.pop();
            s.push(curr->val);
            curr = curr->next;
        }
        ListNode* newHead = nullptr;
        while(!s.empty())
        {
            newHead = new ListNode(s.top(),newHead);
            s.pop();
        }
        return newHead;
    }
};