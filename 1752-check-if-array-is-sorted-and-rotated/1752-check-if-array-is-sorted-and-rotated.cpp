class Solution {
public:
    bool check(vector<int>& nums) {
        int cut=0, len = nums.size()-1;
        
        for(int i=1; i<=len; i++){
            if(nums[i-1] > nums[i]) cut++;
        }
        
        if(nums[len] > nums[0]) cut++;
        
        return cut<=1;
    }
};