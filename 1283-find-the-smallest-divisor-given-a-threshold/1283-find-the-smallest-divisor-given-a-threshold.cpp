class Solution {
private:
    int calculateSum(vector<int>& nums, int divisor){
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += ceil(nums[i] * 1.0/divisor * 1.0);
        }
        return sum;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int maxi = INT_MIN;
        for(auto it: nums){
            maxi = max(maxi, it);
        }
        
        int low = 1, high = maxi, ans = maxi;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            
            if(calculateSum(nums, mid) <= threshold){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
};