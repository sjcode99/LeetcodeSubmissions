/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function(nums) {
    const len = nums.length;
    const right = [];
    
    right[len-1] = 1;
    for(let i=len-2; i>=0; i--){
       right[i] = right[i+1] * nums[i+1];
    }
    
    let left = 1;
    for(const idx in nums){
        right[idx] = right[idx] * left;
        left = left * nums[idx];
    }
    return right;
};