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
    TreeNode *helper(TreeNode *node)
    {
        if(!node->left)         //if no left subtree
            return node->right; //attach right subtree

        if(!node->right)       //if no right subtree
            return node->left; //attach left subtree
        
        TreeNode *leftChild = node->left;  //save left child
        TreeNode *lastLeft = findLastLeft(node->right); //find the leftmost leaf from right subtree
        lastLeft->left = leftChild;  //attch leftChild to left of leftmost leaf of right subtree
        return node->right;
    }

    TreeNode *findLastLeft(TreeNode *node)
    {
        if(!node->left)
            return node;
        return findLastLeft(node->left);
    }
    TreeNode* deleteNode(TreeNode* root, int key) {

        if(!root)
            return NULL;
        
        if(root->val == key)
            return helper(root);
        
        TreeNode *newRoot = root;
        while(root)
        {
            if(root->val > key){
                if(root->left && root->left->val == key)
                {
                    root->left = helper(root->left);
                    break;
                }else{
                    root = root->left;
                }
            }else{
                if(root->right && root->right->val == key)
                {
                    root->right = helper(root->right);
                    break;
                }else{
                    root = root->right;
                }
            }
            
        }
        return newRoot;
        
    }
};