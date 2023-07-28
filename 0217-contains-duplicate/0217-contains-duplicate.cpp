class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_map<int,int> ump;
        
        for(auto it: nums){
            ump[it]++;
        }
        
        for(auto it: ump){
            if(it.second >= 2) return true;
        }
        return false;
    }
};