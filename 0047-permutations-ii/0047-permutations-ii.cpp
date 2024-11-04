class Solution {
private:
    void solve(vector<int> nums, vector<vector<int>>& ans, int n, int index){
        //base case
        if(index >= n){
            ans.push_back(nums);
            return;
        }
        
        for(int i=index; i<n; i++){
            swap(nums[i], nums[index]);
            solve(nums, ans, n, index+1);
            //backtrack
            swap(nums[i], nums[index]);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        int index = 0;
        
        solve(nums, ans, n, index);
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};