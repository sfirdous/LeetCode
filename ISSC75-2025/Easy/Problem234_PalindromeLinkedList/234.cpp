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
    bool isPalindrome(ListNode* head) {
        vector<int> list;
        ListNode *curr = head;
    
        while(curr)
        {
            list.push_back(curr->val);
            curr =curr->next;
        }

        int i = 0;
        int j = list.size() - 1;
        while(i <= j)
            {
                if(list[i] != list[j])
                    return false;
                i++;
                j--;
            }
        return true;
        
    }
};