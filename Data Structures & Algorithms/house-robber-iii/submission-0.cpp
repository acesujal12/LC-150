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
    pair<int, int> dfs(TreeNode* root){
        if(root == nullptr){
            return {0,0};
        }
        
        // Post-order traversal: calculate children first
        pair<int, int> left = dfs(root->left);
        pair<int, int> right = dfs(root->right);

        // Calculate max money if we rob the current node
        // (Must use the 'skip' values of the children)
        int robThis  = root->val + left.second + right.second;

        // Calculate max money if we skip the current node
        // (Can take the best possible outcome from each child)
        int skipThis = max(left.first, left.second) + max(right.first, right.second);

        return {robThis, skipThis};
    }

    int rob(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        pair<int, int> ans = dfs(root);

        return max(ans.first, ans.second);
    }
};