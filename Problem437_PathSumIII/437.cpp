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
class Solution
{
public:
    int findPathSum(TreeNode *root, long long targetSum)
    {
        if (!root)
            return 0;

        int count = 0;
        if (root->val == targetSum) // If the current node's value equals the remaining target sum, we found a valid path
            count = 1;
        count += findPathSum(root->left, targetSum - root->val);  // Count paths starting from the left child
        count += findPathSum(root->right, targetSum - root->val); // Count paths starting from the right chil
        return count;
    }
    int findPathSum(TreeNode *node, long long runningSum, int target, unordered_map<long long, int> &map)
    {
        if (!node)
            return 0;

        int count = 0;
        runningSum += node->val;

        count = map.count(runningSum - target) ? map[runningSum - target] : 0;

        map[runningSum]++;

        count += findPathSum(node->left, runningSum, target, map);
        count += findPathSum(node->right, runningSum, target, map);

        map[runningSum]--;
        return count;
    }

    int pathSum(TreeNode *root, int targetSum)
    {
        if (!root)
            return 0;
        unordered_map<long long, int> map;
        //    return pathSum(root->left,targetSum) // Count paths starting from the left child
        //+ pathSum(root->right,targetSum)          // Count paths starting from the right child
        //+ findPathSum(root,targetSum)             // Count paths starting from the current node;
        map[0] = 1;
        return findPathSum(root, 0LL, targetSum, map);
    }
};