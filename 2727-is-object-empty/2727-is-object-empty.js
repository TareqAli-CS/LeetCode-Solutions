/**
 * @param {Object | Array} obj
 * @return {boolean}
 */
var isEmpty = function(obj) {
    for(let _ in obj){
        return false;
    }
    return true
};