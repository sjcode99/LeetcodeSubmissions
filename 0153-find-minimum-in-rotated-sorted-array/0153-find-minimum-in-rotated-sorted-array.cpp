class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n - 1, ans = INT_MAX;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            
        //  left part is sorted array
            if(nums[low] <= nums[mid]){
                if(ans > nums[low]) ans = nums[low];
                low = mid + 1;               
            }
        //  right part is sorted
            else{
                if(ans > nums[mid]) ans = nums[mid];
                high = mid - 1;
            }
        }
        return ans;
    }
};