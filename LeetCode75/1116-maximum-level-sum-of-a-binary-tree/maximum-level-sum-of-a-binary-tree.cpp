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
    void dfs(TreeNode* node, vector<int>& sums, int d) {
        if (node == nullptr) {
            return;
        }
        
        if (d == sums.size()) {
            sums.push_back(node->val);
        }
        else {
            sums[d] += node->val;
        }

        dfs(node->left, sums, d + 1);
        dfs(node->right, sums, d + 1);
    }

    int maxLevelSum(TreeNode* root) {
        vector<int> sums;

        dfs(root, sums, 0);
        
        int max = sums[0];
        int ans = 1;

        for (auto i = 1; i < sums.size(); i++) {
            if (max < sums[i]) {
                max = sums[i];
                ans = i + 1;
            }
        }

        return ans; 
    }
};