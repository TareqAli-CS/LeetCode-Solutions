class Solution {
public:
    
    int sum_Ascii(string s)
    {
        int sum = 0 ;
        for(auto character : s)
        {
             sum = sum + int(character);
        }
    return sum;
    }
    
    char findTheDifference(string s, string t) {
        
    
     return char(sum_Ascii(t) - sum_Ascii(s));
    }
    
};