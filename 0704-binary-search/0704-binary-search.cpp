class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int st=0, end = n-1;
        int ans = -1;
        while(st <= end){
            int mid = st + (end - st)/2;
            if(nums[mid] == target){
                ans = mid;
                return ans;
            }
            else if(nums[mid] < target) st = mid+ 1;
            else end = mid - 1;
        }
        if(ans == -1) return -1;
        return ans;
    }
};