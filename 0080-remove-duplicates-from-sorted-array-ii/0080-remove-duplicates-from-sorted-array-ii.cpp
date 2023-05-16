class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mp;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            mp[nums[i]]++;    
        }
        vector<int>v;
        nums = v;
        for(auto ele : mp)
        {
            if(ele.second >= 2)
            {
                nums.push_back(ele.first);
                nums.push_back(ele.first);
            }else{
                nums.push_back(ele.first);
            }
        }
        return(nums.size());
        
        
    }
};