class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int counter = 0 ;
            int num = nums[i];
            while(num != 0 )
            {
                counter++;
                num = num / 10;
            }
            if(counter % 2 == 0)
                ans++;
        }
        return ans;
    }
};