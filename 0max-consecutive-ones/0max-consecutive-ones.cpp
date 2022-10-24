class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int>counts  ;
        int count = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == 1)
                count++;
            else
            {
                counts.push_back(count);
                count = 0;
            }
        }
        counts.push_back(count);
        
        return *max_element(counts.begin(),counts.end());
    }
};