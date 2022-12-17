class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int> cnt;
        for(int i=0; i<nums.size(); i++){
            cnt[nums[i]]++;
        }
        
        int ans = 0;
        for(int i=0; i<=nums.size(); i++){
            if(cnt[i] == 0) ans = i;
        }
        return ans;
    }
};