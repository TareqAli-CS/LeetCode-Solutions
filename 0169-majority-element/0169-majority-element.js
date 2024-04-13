/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    const numberOfRepetition = new Map();
    for(num of nums){
        if(numberOfRepetition.has(num)){
            numberOfRepetition.set(num,numberOfRepetition.get(num)+1);
        }else{
            numberOfRepetition.set(num,1);
        }
    }
    let temp = nums[0];
    let highestRepetition = numberOfRepetition.get(temp) ;
    for(const [key,value] of numberOfRepetition.entries()){
        if(value > highestRepetition){
            highestRepetition = value;
            temp = key;
        }
    }
    return temp
};