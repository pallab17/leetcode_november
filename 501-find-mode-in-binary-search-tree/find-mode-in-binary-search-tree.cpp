/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
  vector<int>r;
        int ms=0;
        int cs=0;
        int cn=0;
    void dfs(TreeNode* root){   // inorder traversal technique use korlam to traverse the tree
        if(root==NULL) return;
// using inorder traversal and no xtra space
        dfs(root->left);
        if(root->val==cn) {
            cs++;
        }else{
            cn=root->val;
            cs=1;
        }

        if(cs>ms){
            r={};
            ms=cs;
        }
        if(cs==ms){
            r.push_back(root->val);
        }
        dfs(root->right);
    }
    
    
    vector<int> findMode(TreeNode* root) {
        dfs(root);
        return r;
    }
};