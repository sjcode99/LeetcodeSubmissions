class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int withMinus = nums[0] * nums[1] * nums[n-1];
        int withPlus = nums[n-1] * nums[n-2] * nums[n-3];
        
        return max(withMinus, withPlus);
    }
};