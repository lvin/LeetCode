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
    int maxDepth(TreeNode *root) {
        if (root == NULL){
			return 0;
		}
		int left_height = maxDepth(root->left) + 1;
		int right_height = maxDepth(root->right) + 1;

		return left_height > right_height ? left_height:right_height;
    }
};

