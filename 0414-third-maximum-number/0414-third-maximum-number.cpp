class Solution {
public:
    int thirdMax(vector<int>& v) {
        if(v.size() == 2)
        {
            
            return *max_element(v.begin(),v.end());
        }
//         if(v.size() == 3)
//         {
//             v.erase(max_element(v.begin(),v.end()));
//             v.erase(max_element(v.begin(),v.end()));
//             return *max_element(v.begin(),v.end());
//         }
        
        set<int>st;
    for(auto item : v)
    {
        st.insert(item);
    }
    int counter = 0;
    for(auto itt = st.begin() ; itt != st.end() ; itt++)
    {
        counter++;
        if(counter == st.size()-2)
        return *itt;
        if(st.size() == 2 && counter == 2)
        {
            return *itt;
        }
        if(st.size() == 1 && counter == 1)
        {
            return *itt;
        }
    }
        
        return 0;
    }
};