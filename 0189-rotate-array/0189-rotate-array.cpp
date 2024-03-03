class Solution {
    void reverse(vector<int>& nums, int st, int ed){
        while(st<ed){
            swap(nums[st++], nums[ed--]);
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 1) return;
        
        k = k%n;
        
        reverse(nums, 0, n-1);
        reverse(nums, 0, k-1);
        reverse(nums, k, n-1);
    }
};