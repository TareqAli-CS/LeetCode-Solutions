class Solution {
public:
    bool validMountainArray(vector<int>& v) {
        
        auto a = max_element(v.begin(),v.end());
    auto b = a;
    if(a == v.end()-1 || v.size() < 3 || a == v.begin())
    {
        
        return 0;
    }
    for(auto itt = a+1 ; itt < v.end() ; itt++)
    {
//        debug(*a);
//        debug(*itt);
        if(*itt >= *a)
        {
            return 0;
        }else{
           a = itt;
        }
    }
    for(auto itt = b-1 ; itt >= v.begin() ; itt--)
    {
//        debug(*b);
//        debug(*itt);
        if(*itt >= *b)
        {
            return 0;
        }else{
            b = itt;

        }
    }
  return 1;
        
        
        
        
        
        
        
        
        
        
    }
};