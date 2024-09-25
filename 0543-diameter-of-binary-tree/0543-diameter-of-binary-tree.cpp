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
    pair<int, int> calcDiam(TreeNode* root){
        //{diameter, height}
        if(root == NULL) return {0,0};
        
        pair<int, int> left = calcDiam(root->left);
        pair<int, int> right = calcDiam(root->right);
        
        int leftDiam = left.first;
        int rightDiam = right.first;
        int height = left.second + right.second;
        
        pair<int, int> ans;
        ans.first = max(leftDiam, max(rightDiam, height));
        ans.second = max(left.second, right.second) + 1;
        
        return ans;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {      
        return calcDiam(root).first;
    }
};