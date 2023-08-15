class Solution {
private:
    int lowerBound(vector<int>&nums, int n, int target){
        int low = 0, high = n-1;
        int ans = n;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            
            if(nums[mid] >= target){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
    
    int upperBound(vector<int>&nums, int n, int target){
        int low = 0, high = n-1;
        int ans = n;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            
            if(nums[mid] > target){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        if(n == 0) return {-1, -1};
        
        int lb = lowerBound(nums, n, target);
        int ub = upperBound(nums, n, target);

        if(lb == n || nums[lb] != target) return {-1, -1};
        return {lb, upperBound(nums, n, target) - 1};
    }
};