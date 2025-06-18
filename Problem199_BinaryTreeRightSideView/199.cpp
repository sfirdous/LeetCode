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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> rightNodes;
        if (!root)
            return rightNodes;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int size = q.size(); // no of nodes in one level
            vector<int> level(size); //vector to store node in a level
            for (int i = 0; i < size; ++i) {
                TreeNode* node = q.front();
                q.pop();
                level[i] = node->val; //push values in each level
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
            rightNodes.push_back(level[size - 1]); //right most node is the last node of the level
            
        }
        return rightNodes;
    }
};