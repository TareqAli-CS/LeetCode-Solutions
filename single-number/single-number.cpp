class Solution {
public:
    int singleNumber(vector<int>& nums) {
        set<int>st;
        for(auto item : nums)
        {
            if(st.count(item))
            {
                st.erase(item);
            }else{
                
                st.insert(item);
            }
        }
        return *st.begin();
    }
};