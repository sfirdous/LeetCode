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
    //function to traverse tree and find leafNodes
    void traverseTree(TreeNode* root,vector<int>& leafNodes)
    {
        if(root->left) traverseTree(root->left,leafNodes);
        if(!root->left && !root->right)
            leafNodes.push_back(root->val);
        if(root->right) traverseTree(root->right,leafNodes);

    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leafNodes1;
        vector<int> leafNodes2;
        traverseTree(root1,leafNodes1);
        traverseTree(root2,leafNodes2);
       
       return  leafNodes1 ==  leafNodes2;

    }
};