Array.prototype.last = function() {
    if(this.length)
    {
        let lastIndex =  this.length - 1;
        return this[lastIndex];  
    }
    return -1;
    
};

/**
 * const arr = [1, 2, 3];
 * arr.last(); // 3
 */