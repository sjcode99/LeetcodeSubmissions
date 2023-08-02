/**
 * @param {number[]} nums
 * @return {number}
 */
var findDuplicate = function(nums) {
    let s = nums[0];
    let f = nums[0];
    
    do{
        s = nums[s];
        f = nums[nums[f]];
    }while(s != f);
    
    f = nums[0];
    while(s != f){
        f = nums[f];
        s = nums[s];
    }
    
    return s;
};