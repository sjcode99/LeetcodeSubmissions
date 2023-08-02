/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    let n = nums.length;
    const val1 = (n * (n+1))/2;
    
    const val2 = nums.reduce((sum, val) => {
        sum += val;
        return sum;
    }, 0);
    
    return val1-val2;
};