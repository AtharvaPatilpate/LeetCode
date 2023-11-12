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
    void bottomView(TreeNode* root, vector<int>& ans) {
        if (!root) {
            return;
        }

        if (!root->left && !root->right) {
            ans.push_back(root->val);
        } 

            bottomView(root->left, ans);
            bottomView(root->right, ans);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1, v2;

        bottomView(root1, v1);
        bottomView(root2, v2);

        return v1 == v2;
    }
};