class Solution {
private:
    void helper(int idx, int target, vector<int>& arr, vector<vector<int>>& ans, vector<int>& temp){
//         base case
        if(idx == arr.size()){
            if(target == 0) ans.push_back(temp);
            return;
        }
        
//         pick the element
        if(target >= arr[idx]){
            temp.push_back(arr[idx]);
            helper(idx, target - arr[idx], arr, ans, temp);
            temp.pop_back();
        }
        
//         not pick
        helper(idx+1, target, arr, ans, temp);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n = candidates.size();
        helper(0, target, candidates, ans, temp);
        
        return ans;
    }
};