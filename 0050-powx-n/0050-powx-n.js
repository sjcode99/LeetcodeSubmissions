/**
 * @param {number} x
 * @param {number} n
 * @return {number}
 */
var myPow = function(x, n) {
    let ans = 1.0, nn=n;
    if(n<0) nn = -1 * n;
    
    while(nn){
        if(nn%2 == 0){
            x = x * x;
            nn = nn/2;
        }else{
            ans = ans * x;
            nn -= 1;
        }
    }
    if(n<0) ans = 1/ans;
    return ans;
};