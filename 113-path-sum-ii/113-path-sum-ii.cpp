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
    
    void dfs(TreeNode* root, int sum, int targetSum, vector<int>&v1, vector<vector<int>>&v){
        
        if(root == NULL) {
            return;
        }
        
        v1.push_back(root->val);
        sum += root->val;
        
        if(root->left == NULL && root->right == NULL){
            if(sum == targetSum){
                v.push_back(v1);
                sum -= root->val;
                v1.pop_back();
                return;
            }
        }
        
        dfs(root->left, sum, targetSum, v1, v);
        dfs(root->right, sum, targetSum, v1, v);
        sum -= root->val;
        v1.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<vector<int>>v;
        vector<int> v1;
        
        dfs(root, 0, targetSum, v1, v);
        return v;
        
    }
};