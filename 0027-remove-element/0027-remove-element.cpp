class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int counter = nums.size();
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] == val)
            {
                counter--;
                nums[i] = INT_MAX;
            }
        }
        
        sort(nums.begin(),nums.end());
        
        return counter;
    }
};