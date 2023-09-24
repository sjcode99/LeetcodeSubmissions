class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        if(n == 1) return 1;
        sort(nums.begin(), nums.end());
        
        int cnt= 0, lastSmaller = INT_MIN, maxLen = 1;
        for(int i=0; i<n; i++){
            if(nums[i] - 1 == lastSmaller){
                cnt++;
                lastSmaller = nums[i];
            }
            else if(lastSmaller != nums[i]){
                cnt = 1;
                lastSmaller = nums[i];
            }
            maxLen = max(maxLen, cnt);
        }
        
        return maxLen;
    }
};