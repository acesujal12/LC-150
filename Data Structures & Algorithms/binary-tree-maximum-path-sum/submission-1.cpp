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

    int maxi(TreeNode* root, int &maximum){
        if(root == nullptr){
            return 0;
        }

        int leftSum = maxi(root->left, maximum);
        if(leftSum < 0) leftSum = 0;
        int rightSum = maxi(root->right, maximum);
        if(rightSum < 0) rightSum = 0;

        maximum = max(maximum, root->val + leftSum + rightSum);

        return root->val + max(leftSum , rightSum);
    }
    int maxPathSum(TreeNode* root) {
        int mx = INT_MIN;
        maxi(root, mx);

        return mx;
    }
};
