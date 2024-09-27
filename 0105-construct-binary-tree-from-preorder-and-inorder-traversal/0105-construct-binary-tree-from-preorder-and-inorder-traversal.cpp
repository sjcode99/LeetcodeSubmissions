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
    void NodeToIndexMapping(vector<int>& inorder, map<int, int>& mp){
        for(int i=0; i<inorder.size(); i++){
            mp[inorder[i]] = i;
        }
    }
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, map<int, int>& mp,
             int &index, int size, int sIdx, int eIdx){
        if(index >= size || sIdx > eIdx) return NULL;
        
        int ele = preorder[index++];
        TreeNode* node = new TreeNode(ele);
        int pos = mp[ele];

        node->left = solve(preorder, inorder, mp, index, size, sIdx, pos-1);
        node->right = solve(preorder, inorder, mp, index, size, pos+1, eIdx);
        
        return node;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int size = preorder.size();
        int index = 0;
        map<int, int> mp;
        NodeToIndexMapping(inorder, mp);
        
        TreeNode* ans = solve(preorder, inorder, mp, index, size, 0, size-1);
        return ans;
    }
};