/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    const map = new Map();
    
    for(const index in nums){
        if(map.has(target-nums[index])){
            return [map.get(target-nums[index]), index];
        }else{
            map.set(nums[index], index);
        }
    }
};