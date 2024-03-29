vector<vector<int> > pathSum(TreeNode *root, int sum) {
        vector<vector<int> > result;
        if (root == NULL) return result;

		vector<int> path;
		pathSum(root, sum, path, result);
        
		return result;
}

void pathSum(TreeNode *root, int sum, vector<int> &path,vector<vecotor<int> > &result)
{
	if (root == NULL) {
		return;
	}


	path.push_back(root->val);
	if (root->left == NULL && root->right == NULL)
	{
		if (root->val == sum)
		result.push_back(path);
	}
	
	pathSum(root->left, sum - (root->val), path, result);
    pathSum(root->right, sum - (root->val), path, result);

	path.pop_back();
}
