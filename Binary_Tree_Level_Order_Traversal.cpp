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
    vector<vector<int> > levelOrderBottom(TreeNode *root) {
        vector<vector<int> > result;
        if (root == NULL) {
            return result;
        }
        
        queue<TreeNode *> current, next;
        vector<int> level;
        TreeNode *p = root;
        current.push(p);
        
        while (!current.empty()) {
            while (!current.empty()) {
                p = current.front();
                current.pop();
                level.push_back(p->val);
                if (p->left) next.push(p->left);
                if (p->right) next.push(p->right);
            }
            result.push_back(level);
            level.clear();
            swap(next,current);
        }
        return result;
    }
};

