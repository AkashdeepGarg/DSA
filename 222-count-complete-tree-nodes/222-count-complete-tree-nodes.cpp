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
    int ans=1;
    int countNodes(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        if(root->left){
            ans++;
            countNodes(root->left);
        }
        if(root->right){
            ans++;
            countNodes(root->right);
        }
        return ans;
        
    }
};