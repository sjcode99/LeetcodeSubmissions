/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    let el=0;
    let cnt=0;
    
    for(const n of nums){
        if(cnt === 0) el = n;
        
        if(el == n) cnt++;
        else cnt--;
    }
    return el;
};