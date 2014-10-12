int sumNumbers(TreeNode *root) {
	return dfs(root, 0);
}

int dfs(TreeNode* root, int sum) {
	if (root == NULL) return 0;
	if (root->left == NULL && root->rigth == NULL) 
		return sum * 10 + root->val;

	return dfs(root->left, sum) + dfs(root->right, sum);
}

