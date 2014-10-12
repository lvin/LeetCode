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
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> result;
        stack<TreeNode *> s;
        TreeNode *p = root;
        
        while(p || !s.empty()) {
            while (p) {
                s.push(p);
                p = p->left;
            }
            p = s.top();
            
            s.pop();
            result.push_back(p->val);
            p = p->right; 
        }
        
        return result;
    }
};


