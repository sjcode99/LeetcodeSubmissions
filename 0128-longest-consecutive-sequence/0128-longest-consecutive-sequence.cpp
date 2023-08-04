class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        
        int maxLen=0, cnt=1, lastEl = nums[0];
        
        for(auto it: nums){
            if(it - 1 == lastEl){
                cnt++;
                lastEl = it;
            }else if(it != lastEl){
                cnt = 1;
                lastEl = it;
            }
            maxLen = max(maxLen, cnt);
        }
        return maxLen;
    }
};