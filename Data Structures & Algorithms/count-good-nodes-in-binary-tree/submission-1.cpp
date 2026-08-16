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
    void dfs(TreeNode* root, int max, int& ct){
        if(root==nullptr) return;
        if(root->val >= max){
            max = root->val;
            ct++;
        }

        dfs(root->left, max, ct);
        dfs(root->right, max, ct);
    }
    int goodNodes(TreeNode* root) {
        int ct = 0;
        dfs(root, root->val, ct);

        return ct;
    }
};
