/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        int level = 0, maxlevel = 0, sum = 0,
            maxSum = INT_MIN; // for negative values
        q.push(root);
        while (!q.empty()) {
            int size = q.size(); // node in one level
            level++;             // increment the level
            sum = 0;
            for (int i = 0; i < size; ++i) {
                TreeNode* node = q.front();
                q.pop();
                sum += node->val; // include the node value to level sum
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
            if (sum > maxSum) {
                maxSum = sum;
                maxlevel = level;
            }
        }
        return maxlevel;
    }
};