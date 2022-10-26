class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
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