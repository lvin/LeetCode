/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode *root) {
        if (root == NULL) {
            return 0;
        }
        
        int left_depth = minDepth(root->left)  + 1;
        int right_depth = minDepth(root->right) + 1;
        if (left_depth == 1 || right_depth == 1) {
            return left_depth == 1 ? right_depth:left_depth;
        }

        return left_depth < right_depth ? left_depth:right_depth;
    }
};

