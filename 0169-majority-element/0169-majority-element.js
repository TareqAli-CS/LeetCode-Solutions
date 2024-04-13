/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    let numberOfRepetition = 0;
    let answer = 0;
    for(let num of nums){
        if(numberOfRepetition == 0){
            numberOfRepetition = 1;
            answer = num;
        }
        else if(num == answer){
            numberOfRepetition++;
        }else{
            numberOfRepetition--;
        }
    }
    return answer
};