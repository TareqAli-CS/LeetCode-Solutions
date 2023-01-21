class Solution {
public:
    vector<int> intersection(vector<int>& v, vector<int>& v2) {
        
        
        set<int>st1;
    set<int>st2;
    for(auto item : v)
    {
        st1.insert(item);
    }
    for(auto item : v2)
    {
        st2.insert(item);
    }
    vector<int>ans;
    for(auto itt = st1.begin() ; itt != st1.end() ; itt++)
    {
        if(st2.count(*itt))
        {
            ans.push_back(*itt);
        }
    }
        
        return ans;
        
        
    }
};