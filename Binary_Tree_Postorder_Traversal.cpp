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
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> result;
        stack<TreeNode *> s;
        TreeNode *p = root, *r = NULL;
        
        while(p || !s.empty()) {
            if (p) {
                s.push(p);
                p=p->left;
            } else {
                p = s.top();
                if (p->right && p->right != r) {
                    p=p->right;
                    s.push(p);
                    p = p->left;
                } else {
                    p = s.top();
                    result.push_back(p->val);
                    s.pop();
                    r = p;
                    p = NULL;
                }
            }
        }
        
        return result;
    }
};

