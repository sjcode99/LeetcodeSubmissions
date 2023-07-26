/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    let sum = 0;
    let maxi = -Infinity;
    for(let i=0; i<nums.length; i++){
        sum += nums[i];
        
        if(maxi < sum)
            maxi = sum;
        
        if(sum < 0)
            sum = 0;
    }
    return maxi;
};