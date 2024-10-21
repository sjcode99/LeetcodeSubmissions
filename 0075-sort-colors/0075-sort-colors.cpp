class Solution {
public:
    void sortColors(vector<int>& nums) {
        int st = 0, n = nums.size();
        int mid = 0, ed = n - 1;
        
        while(mid <= ed){
            if(nums[mid] == 0) swap(nums[st++], nums[mid++]);
            else if(nums[mid] == 1) mid++;
            else swap(nums[mid], nums[ed--]);
        }
    }
};