class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ump;
        vector<int> ans;
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            //found
            int temp = target - nums[i];
            if(ump.find(temp) != ump.end()){
                ans.push_back(ump[temp]);
                ans.push_back(i);
                break;
            }else{      //not found
                ump[nums[i]] = i;
            }    
        }
        return ans;
    }
};