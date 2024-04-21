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
    
    vector <int> inorder;
    vector<int> inorderTraversal(TreeNode* root) {
        
        if(root==NULL) {
            return inorder;
        }
        
        if(root->left) {
            inorderTraversal(root->left);
        }
        
        if(root) {
            inorder.push_back(root->val);
        }
        
        if(root->right) {
             inorderTraversal(root->right);
        }
       
        
        return inorder;
        
    }

     vector <int> preorder;
    vector<int> preorderTraversal(TreeNode* root) {
        
        if(root==NULL) {
            return inorder;
        }
        
        if(root) {
            inorder.push_back(root->val);
        }

        if(root->left) {
            inorderTraversal(root->left);
        }
        
        
        
        if(root->right) {
             inorderTraversal(root->right);
        }
       
        
        return inorder;
        
    }

    vector <int> posteorder;
    vector<int> postorderTraversal(TreeNode* root) {
        
        if(root==NULL) {
            return inorder;
        }
        
        
        
        if(root->left) {
            inorderTraversal(root->left);
        }
        
        
        
        if(root->right) {
             inorderTraversal(root->right);
        }

        if(root) {
            inorder.push_back(root->val);
        }
       
        
        return inorder;
        
    }
};