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
    vector<int> preorderTraversal(TreeNode *root) {
        TreeNode *p = root;
      	stack<TreeNode *> s;
	   vector<int> result;

	   while(p || !s.empty()) {
		    while(p) {
			result.push_back(p->val);
			s.push(p);
			p = p->left;
		}
		p = s.top();
		s.pop();
		p = p->right;
	}

	return result;
    }

};

