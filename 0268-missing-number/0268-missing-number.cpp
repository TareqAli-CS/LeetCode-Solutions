class Solution {
public:
    int missingNumber(vector<int>& nums) {
    
    int sum = 0 ;
    int flag = 0 ;
    for(int i = 0 ; i < nums.size() ; i++)
    {
        sum = sum + nums[i];
    }
    int m = *max_element(nums.begin() , nums.end());
    int rsum = m*(m+1)/2;
    if( (find(nums.begin(),nums.end(),0) - nums.begin() ) >= nums.size() )
        flag = 1;
    if(rsum != sum)
    {
        return rsum-sum ;
    }
    else if (flag == 0)
    {
        return m+1 ;
    }
    else
    {
        return 0;
    }
        
        
    }
};