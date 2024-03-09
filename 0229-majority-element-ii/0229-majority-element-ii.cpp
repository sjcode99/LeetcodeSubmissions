class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size(), mini = (int)n/3 + 1;
        map<int, int> mpp;
        
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
            
            if(mpp[nums[i]] == mini) ans.push_back(nums[i]);
            if(ans.size() == 2) break;
        }
        return ans;
    }
};