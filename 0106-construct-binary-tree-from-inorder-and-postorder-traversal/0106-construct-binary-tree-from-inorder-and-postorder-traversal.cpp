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
void nodeMapping(vector<int> in, int n, map<int, int> &mp){
    for(int i=0; i<n; i++){
        mp[in[i]] = i;
    }
}
    
TreeNode* solve(vector<int> in, vector<int> post, map<int, int> &mp, int &index, int sIdx, int eIdx, int n){
    if(index < 0 || sIdx > eIdx) return NULL;

    int ele = post[index--];
    TreeNode* root = new TreeNode(ele);
    int pos = mp[ele];

    root->right = solve(in, post, mp, index, pos+1, eIdx, n);
    root->left = solve(in, post, mp, index, sIdx, pos-1, n);

    return root;
}
public:
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        map<int, int> mp;
        int n = post.size();
        int index = n-1;
        
        nodeMapping(in, n, mp);
        
        TreeNode* ans = solve(in, post, mp, index, 0, n-1, n);
        return ans;
    }
};