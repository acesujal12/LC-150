/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* findMin(TreeNode* node){
        while(node->left != NULL){
            node = node->left;
        }
        return node;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {

        if (root == NULL) return root;

        if (key > root->val) {
            root->right = deleteNode(root->right, key);
        } else if (key < root->val) {
            root->left = deleteNode(root->left, key);
        } else { // When the node has No Child
            if (root->right == NULL && root->left == NULL) {
                delete root;
                root = nullptr;
                return root;
            }
            // When the node has 1 child
            if(root->left == NULL){
                TreeNode* temp = root;
                root = root->right;
                delete temp;
                return root;
            } else if(root->right == NULL){
                TreeNode* temp = root;
                root = root->left;
                delete temp;
                return root;
            }

            // 2 children

            else {
                TreeNode* temp = findMin(root->right);
                root->val = temp->val;
                root->right = deleteNode(root->right, root->val);
                return root;
            }
        }
        return root;
    }
};