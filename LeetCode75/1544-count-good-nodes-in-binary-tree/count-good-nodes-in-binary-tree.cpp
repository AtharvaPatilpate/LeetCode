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
    void helper(TreeNode* root, int curr, int &counter) {
        if (!root) {
            return;
        }
        if (curr <= root->val) {
            counter++;
        }
        if (!root->left && !root->right) {
            return;
        }

        helper(root->left, max(curr, root->val), counter);
        helper(root->right, max(curr, root->val), counter);
    }

    int goodNodes(TreeNode* root) {
        int counter = 0;
        helper(root, INT_MIN, counter);

        return counter;
    }
};