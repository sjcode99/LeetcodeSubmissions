/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    const str = s.toLowerCase().replace(/[^0-9a-z]/gi, '');
    for(let i=0, j=str.length-1; i<=j; j--, i++){
        if(str[i] != str[j]) return false;
    }
    return true;
};