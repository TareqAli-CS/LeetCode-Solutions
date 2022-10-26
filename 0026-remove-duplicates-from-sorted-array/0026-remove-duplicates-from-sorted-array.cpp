class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        if(nums.size() == 0)
            return 0;
        if(nums.size() == 1)
            return 1;
        int counter = 0  ;
        for(int follow = 1 ; follow < nums.size() ; follow++)
        {
            if( nums[follow] != nums[counter] )
            {
                 counter++;
            }
            nums[counter] = nums[follow];
        }
        return counter+1;
    }
};