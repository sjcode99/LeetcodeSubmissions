class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> um;
        vector<int> ans;
        int n = nums.size();
        for(int i=0; i<n; i++){
            int val = target - nums[i];
            if(um.find(val) != um.end()){
                 ans.push_back(um[val]);
                ans.push_back(i);
            }else{
               um[nums[i]] = i;
            }
        }
        return ans;
    }
};