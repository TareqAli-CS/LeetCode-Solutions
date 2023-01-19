class Solution {
public:
    vector<int> replaceElements(vector<int>& v) {
        
        if(v.size() == 1)
        {
            v[0] = -1;
            return v;
        }else if(v.size() == 2)
        {
            v[0] = v[1];
            v[1] = -1;
            return v;
        }
            
        for(int i = 0 ; i < v.size() ; i++)
        {
            v[i] = *max_element(v.begin() + (i+1) , v.end());
        }
        v[v.size()-1] = -1;
        
        return v;
        
    }
};