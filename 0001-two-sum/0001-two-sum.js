/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let mp = new Map();
    for (let i in nums) {
        mp.set(nums[i], i);
    }
    
    for (let i in nums) {
    let num = nums[i];
    let numToSearchFor = target - num;
    if (mp.get(numToSearchFor)) {

        if (mp.get(numToSearchFor) != i) {
            return [i, mp.get(numToSearchFor)];
        }
    }
}
    
};