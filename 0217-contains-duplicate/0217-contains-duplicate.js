/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    nums.sort((a,b)=>a-b)
    console.log(nums)
    for(let i in nums){
        if(nums[i] == nums[i-1] || nums[i] == nums[i+1])
            return true
    }
    return false
};
