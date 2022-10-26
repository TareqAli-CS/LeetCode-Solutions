class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    vector<int>v{1,1,2};
    set<int>st;
    int size = nums.size();
    int buffer;
    for(int i = 0 ; i < nums.size() ; i++)
    {

        st.insert(nums[i]);
        if(buffer == st.size())
        {
            nums.erase(nums.begin()+i,nums.begin()+i+1);
            i--;
        }
        
        buffer = st.size();
    }
        
    
    return nums.size();
    }
};