/**
 * @param {number[][]} matrix
 * @param {number} target
 * @return {boolean}
 */
var searchMatrix = function(mat, tar) {
    let m = mat.length;
    let n = mat[0].length;
    
    let lo= 0;
    let hi=(m*n)-1;
    
    while(lo <= hi){
        let mid = lo + Math.floor((hi-lo)/2);
        let val = Math.floor(mid/n);
        
        if(mat[val][mid%n] === tar){
            return true;
        }
        
        if(mat[val][mid%n] > tar){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return false;
};