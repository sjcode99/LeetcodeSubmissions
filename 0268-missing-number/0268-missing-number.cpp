class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum= 0, calSum, n = nums.size();
        
        calSum = n*(n+1)/2;
        for(auto it: nums){
            sum += it;
        }
        
        return calSum - sum;
        
    }
};