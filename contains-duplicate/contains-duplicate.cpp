class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        set<int>st;
        for(auto item : nums)
        {
            if(st.count(item) == 1)
            {
                return true;
            }
            st.insert(item);
            
        }
        return false;
        
    }
};