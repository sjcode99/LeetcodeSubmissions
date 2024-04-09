class Solution {
private:
    void helper(vector<int>& nums, int freq[], vector<vector<int>>& ans, vector<int>& arr, int n){
        if(arr.size() == nums.size()){
            ans.push_back(arr);
            return;
        }
        
        for(int i=0; i<n; i++){
            if(!freq[i]){
                arr.push_back(nums[i]);
                freq[i] = 1;
                helper(nums, freq, ans, arr, n);
                freq[i] = 0;
                arr.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n = nums.size();
        int freq[n];
        for(int i=0; i<n; i++) freq[i] = 0;
        helper(nums, freq, ans, temp, n);
        
        return ans;
    }
};