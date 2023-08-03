/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    
    let longestCommonPre = '';
    for(let i = 0 ;i < strs[0].length;i++){
        let charToCheck = strs[0][i];
        if(!charToCheck) return '';
        if(strs.every(str=>str[i] == charToCheck)){
            longestCommonPre += charToCheck;
        }else{
            break;
        }
    }
    return longestCommonPre;
    
    
};