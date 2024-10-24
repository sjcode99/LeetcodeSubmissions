class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        
        for(int i=0; i<n; i++){
            int val = abs(nums[i]);
            if(nums[val-1] < 0){        // visited
                ans.push_back(val);
            }else{                        //not visited
                nums[val-1] *= -1;
            }
        }
        return ans;
    }
};