class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
    int first = 0 ;
    int end = nums.size() - 1;
    int mid = 0 ;
    while(first <= end)
    {
        mid =   end + first ;
        mid = mid / 2 ;
        if(nums[mid] == target)
        {
            return mid;
        }
        else if (target > nums[mid])
            first = mid + 1;
        else
            end = mid - 1 ;
    }

    if(target > nums[nums.size() - 1 ])
        return nums.size() ;
    else if(target < nums[0])
        return 0;
        
        
    return first;
      
    }
};