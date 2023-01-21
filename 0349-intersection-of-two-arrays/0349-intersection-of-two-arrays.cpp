class Solution {
public:
    vector<int> intersection(vector<int>& v, vector<int>& v2) {
        
        
    unordered_set<int>st1;
    for(auto item : v)
    {
        st1.insert(item);
    }
    vector<int>ans;
    for(auto item : v2)
    {
        if(st1.count(item))
        {
             ans.push_back(item);
            st1.erase(item);
        }
    }
        
        return ans;
        
        
    }
};