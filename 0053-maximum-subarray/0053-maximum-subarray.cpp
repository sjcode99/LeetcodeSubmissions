class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN, sum = 0;
        for(auto it: nums){
            sum += it;
            
            if(maxi < sum)
                maxi = sum;
            
            if(sum < 0) 
                sum = 0;
            
        }
        return maxi;
    }
};