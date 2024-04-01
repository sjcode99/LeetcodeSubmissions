/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    let words = s.split(' ');
    let ans = '';

    for(let i=words.length-1; i>=0; i--){
        if(words[i] === '' ) continue;
        ans += words[i] + ' ';
    }

    return ans.trim();
    
};