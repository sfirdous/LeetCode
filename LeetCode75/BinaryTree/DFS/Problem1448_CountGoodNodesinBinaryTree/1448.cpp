/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int traverseTree(TreeNode* root,int max_value)
    {
        if(!root) return 0;
        int count = 0;

        if(root->val >= max_value)
        {
            max_value = root->val;
            count  =1;
        }

        count += traverseTree(root->left,max_value);
        count += traverseTree(root->right,max_value);

        return count;
    }
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        return traverseTree(root,root->val);
    }
};