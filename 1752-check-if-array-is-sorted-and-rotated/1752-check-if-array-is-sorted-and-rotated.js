/**
 * @param {number[]} nums
 * @return {boolean}
 */
var check = function(nums) {
    let cnt=0, n= nums.length-1;
    for(let i=1; i<=n; i++){
        if(nums[i-1] > nums[i]) cnt++;
    }
    if(nums[n] > nums[0]) cnt++;
    
    return cnt<=1;
};