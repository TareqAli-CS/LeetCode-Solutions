class Solution {
public:
    char findTheDifference(string s, string t) {
        
    
    map<char,int>mpS;
    
    for(int i = 0 ; i < s.length() ; i++ )
    {
        mpS[s[i]]++;
        if(mpS[t[i]] == 0)
        {
            mpS[t[i]] = -1;
        }
        else
        mpS[t[i]]--;
    }
    mpS[t[t.length()-1]]--;
        
   for(auto element : mpS)
    {
        if(element.second == -1)
            return element.first ;
    }
        
        
      return  '-1';
    }
    
};