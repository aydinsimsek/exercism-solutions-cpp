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
    private: 
        bool checkSymmetry(TreeNode* left, TreeNode* right)
        {
            bool first = false;
            bool second = false;
            if(left->left == NULL && right->right == NULL && left->right == NULL && right->left == NULL)
            {
                return true;
            }
            else if(left->left == NULL && right->right == NULL) 
            {
                first = true;
                if(left->right != NULL && right->left != NULL && left->right->val == right->left->val)
                {
                    second = checkSymmetry(left->right, right->left);
                }
                else
                {
                    return false;
                }
            }
            else if(left->right == NULL && right->left == NULL) 
            {
                second = true;
                if(left->left != NULL && right->right != NULL && left->left->val == right->right->val)
                {
                    first = checkSymmetry(left->left, right->right);
                }
                else
                {
                    return false;
                }
            }
            else
            {
                if(left->left != NULL && right->right != NULL && left->left->val == right->right->val)
                {
                    first = checkSymmetry(left->left, right->right);
                }
                if(left->right != NULL && right->left != NULL && left->right->val == right->left->val)
                {
                    second = checkSymmetry(left->right, right->left);
                }
            }
            return first && second;
        }

    public:
        bool isSymmetric(TreeNode* root)
        {
            if(root->left == NULL && root->right == NULL)
            {
                return true;
            }
            if(root->left != NULL && root->right != NULL && root->left->val == root->right->val)
            {
                return checkSymmetry(root->left, root->right);
            }
            return false;
        }
};