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

    void bfs(TreeNode* root, vector<int> &r, int depth) {
        if (!root) {
            return;
        }
        if (r.size() == depth) {
            r.push_back(root->val);
        }
        else {
            r[depth] = root->val;
        }

        depth++;
        bfs(root->left, r, depth);
        bfs(root->right, r, depth);
    }

    vector<int> rightSideView(TreeNode* root) {
        int depth = 0;
        vector<int> r;

        bfs(root, r, depth);
        return r;
    }
};