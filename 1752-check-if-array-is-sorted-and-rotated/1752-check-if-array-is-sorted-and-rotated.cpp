class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt = 0, n = nums.size()-1;
        for(int i=1; i<=n; i++){
            if(nums[i-1] > nums[i]) cnt++;
        }
        
        if(nums[n] > nums[0]) cnt++;
        
        return cnt<=1;
    }
};