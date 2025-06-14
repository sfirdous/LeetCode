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
    int findPathSum(TreeNode *root,long long targetSum)
    {
        if(!root) return 0;

        int count = 0;
        if(root->val == targetSum) // If the current node's value equals the remaining target sum, we found a valid path
            count = 1;
        count += findPathSum(root->left,targetSum - root->val);      // Count paths starting from the left child
        count += findPathSum(root->right,targetSum - root->val);    // Count paths starting from the right chil
        return count;

    }
    int pathSum(TreeNode* root, int targetSum) {
       if(!root) return 0;
       return pathSum(root->left,targetSum) // Count paths starting from the left child 
       + pathSum(root->right,targetSum)     // Count paths starting from the right child
        + findPathSum(root,targetSum)       // Count paths starting from the current node;   

    }

};