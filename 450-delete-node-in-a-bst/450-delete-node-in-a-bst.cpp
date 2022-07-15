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
    
    int minVal(TreeNode* root){
           
    while(root->left != NULL ){
        root = root->left;
            }
         return root->val;
            
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
       if(root == NULL){
           return root;
       } 
        if(root->val == key){
            // 0 child
            if(root->left == NULL && root->right == NULL){
                delete root;
                return NULL;
            }
            //1 child
       //left child
                      if(root->left != NULL && root->right == NULL){
              TreeNode* temp = root->left;
                delete root;
                return temp;
            }
              //right child
                      if(root->left == NULL && root->right != NULL){
              TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            //2 child
            if(root->left  != NULL && root->right != NULL){
                root->val = minVal(root->right);
                root->right = deleteNode(root->right,  root->val );
            }
        }
        else if(key > root->val ){
            root->right = deleteNode(root->right,key);
           
        }
                else {              //(key < root->val )
            root->left = deleteNode(root->left,key);
            
        }
       return root;
    }
};