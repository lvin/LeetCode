class Solution {
public:
    bool check(char c, bool used[])
{
	if (c == '.') return true;

	if (used[c - '1']) return false;

	used[c - '1'] = true;
	return true;
}

bool isValidSudoku(vector<vector<char> > &board) {
        bool used[9];

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
    bool isValidBST(TreeNode *root) {
        stack<TreeNode *> s;
        TreeNode* p = root;
        int prev = INT_MIN;
        while (p || !s.empty()) {
            if (p) {
                s.push(p);
                p = p->left;
            } else {
                p = s.top();
                if (p->val <= prev) {
                    return false;
                } 
                prev = p->val;
                s.pop();
                p = p->right;
            }
        }
        
        return true;
    }
};

