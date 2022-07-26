/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)
        {
            return NULL;
        }
    if(root == p or root == q){
        
        return root;
    }
   
  
    
    TreeNode* leftsubtree = lowestCommonAncestor(root->left,p,q);
    TreeNode* rightsubtree = lowestCommonAncestor(root->right,p,q);
     
        
     if(leftsubtree && rightsubtree){
         return root;
     }
     if(!leftsubtree)
     {
         return rightsubtree;
     }
     if(!rightsubtree){
         return leftsubtree;
     }
        
    return NULL;
    }
};