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
private:
    int solveBST(TreeNode* root, int K, int &it){
        if(root == NULL) return -1;
        
        int left = solveBST(root->left, K, it);
        
        if(left != -1) return left;
        it++;
        
        if(it == K) return root->val;
        
        return solveBST(root->right, K, it);
    }
public:
    int kthSmallest(TreeNode* root, int K) {
        int it = 0;
        return solveBST(root, K, it);
    }
};