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
    int maxi = 1;
    void f(TreeNode* root,bool dir,int cnt)
    {
        if(root==NULL)
        {
            maxi=max(maxi,cnt);
            return;
        }
        if(dir == true)
            f(root->right, false, cnt+1);
        else
            f(root->left, true, cnt+1);
    }
    void f1(TreeNode* root)
    {
        if(root==NULL) {
            return;
        }
        
        f(root, false, 0);
        f(root, true, 0);

        f1(root->left);
        f1(root->right);
    }
    int longestZigZag(TreeNode* root) {
        f1(root);
        return maxi-1;
    }
};