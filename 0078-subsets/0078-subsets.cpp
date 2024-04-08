class Solution {
private:
    void helper(int ind, vector<int>& temp, vector<vector<int>>& ans, vector<int>& nums, int n){
        if(ind == n){
            ans.push_back(temp);
            return;
        }
        
        temp.push_back(nums[ind]);
        helper(ind+1, temp, ans, nums, n);
        
        temp.pop_back();
        
        helper(ind+1, temp, ans, nums, n);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n = nums.size();
        
        helper(0, temp, ans, nums, n);
        return ans;
        
    }
};